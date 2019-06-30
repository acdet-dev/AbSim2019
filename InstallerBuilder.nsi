; Installer for AbSim

!define icon "icon.ico"
!include "x64.nsh"

;--------------------------------
;Include Modern UI

  !include "MUI2.nsh"
  !include "LogicLib.nsh"

;--------------------------------
;General

  ;Name and file
  Name "AbSim"
  OutFile "AbSimInstaller.exe"

  ;Default installation folder
  InstallDir "$LOCALAPPDATA\AbSim"
  
  ;Get installation folder from registry if available
  InstallDirRegKey HKCU "Software\AbSim" ""

  ;Request application privileges for Windows Vista
  RequestExecutionLevel 'admin'
  
  !ifdef icon
    Icon "${icon}"
  !endif
  
  
  
  ;Function .onInit
    ;Delete "AbSimInstaller.exe"
    ;UserInfo::GetAccountType
    ;pop $0
    ;${If} $0 != "admin" ;Require admin rights on NT4+
    ;    MessageBox mb_iconstop "Administrator rights required!"
    ;    SetErrorLevel 740 ;ERROR_ELEVATION_REQUIRED
    ;    Quit
    ;${Else}
    ;    MessageBox mb_iconstop "You're an administrator!"
    ;    SetErrorLevel 740 ;ERROR_ELEVATION_REQUIRED
    ;    Quit
    ;${EndIf}
  ;FunctionEnd
  
  ;.onInit

;--------------------------------
;Variables

  Var StartMenuFolder

;--------------------------------
;Interface Settings

  !define MUI_ABORTWARNING

;--------------------------------
;Pages

  !insertmacro MUI_PAGE_COMPONENTS
  !insertmacro MUI_PAGE_DIRECTORY
  
  ;Start Menu Folder Page Configuration
  !define MUI_STARTMENUPAGE_REGISTRY_ROOT "HKCU" 
  !define MUI_STARTMENUPAGE_REGISTRY_KEY "Software\AbSim" 
  !define MUI_STARTMENUPAGE_REGISTRY_VALUENAME "Start Menu Folder"
  
  !insertmacro MUI_PAGE_STARTMENU Application $StartMenuFolder
  
  !insertmacro MUI_PAGE_INSTFILES
  
  !insertmacro MUI_UNPAGE_CONFIRM
  !insertmacro MUI_UNPAGE_INSTFILES

;--------------------------------
;Languages
 
  !insertmacro MUI_LANGUAGE "English"

;--------------------------------
;Installer Sections

Section "AbSim Core Files" AbSimCore

  SetOutPath "$INSTDIR"
  
  ;CreateDirectory "$INSTDIR\glade"
  ;CreateDirectory "$INSTDIR\html"
  ;CreateDirectory "$INSTDIR\voices"
  
  ;ADD YOUR OWN FILES HERE...
  ;File /r "glade\*.*" "glade"
  ;File /r "html" "html"
  ;File /r "voices" "voices"
  File /r "" ""
  ;ExecWait '"$INSTDIR\drivers\dpinst-amd64.exe"' $DRIVER_RETURN
  ${If} ${RunningX64}
    ClearErrors
	UserInfo::GetName
	IfErrors Win9x
	Pop $0
	UserInfo::GetAccountType
	Pop $1
	# GetOriginalAccountType will check the tokens of the original user of the
	# current thread/process. If the user tokens were elevated or limited for
	# this process, GetOriginalAccountType will return the non-restricted
	# account type.
	# On Vista with UAC, for example, this is not the same value when running
	# with `RequestExecutionLevel user`. GetOriginalAccountType will return
	# "admin" while GetAccountType will return "user".
	UserInfo::GetOriginalAccountType
	Pop $2
	StrCmp $1 "Admin" 0 +3
		;MessageBox MB_OK 'User "$0" is in the Administrators group${REALMSG}'
        ;ExecShell runas '"$INSTDIR\drivers\installdrivers.bat" /c /q /sa /sw /PATH "$INSTDIR\drivers"'
        ExecWait '"$INSTDIR\drivers\dpinst-amd64.exe" /PATH "$INSTDIR\drivers"'
		Goto done
	StrCmp $1 "Power" 0 +3
		;MessageBox MB_OK 'Please run this installer as an administrator, so it can install drivers.'
		Goto done
	StrCmp $1 "User" 0 +3
		;MessageBox MB_OK 'Please run this installer as an administrator, so it can install drivers.'
		Goto done
	StrCmp $1 "Guest" 0 +3
		;MessageBox MB_OK 'Please run this installer as an administrator, so it can install drivers.'
		Goto done
	MessageBox MB_OK "Unknown error"
	Goto done

	Win9x:
		# This one means you don't need to care about admin or
		# not admin because Windows 9x doesn't either
		MessageBox MB_OK "Error! This DLL can't run under Windows 9x!"

	done:
        
    
    
  ${Else}
    ClearErrors
	UserInfo::GetName
	IfErrors x86Win9x
	Pop $0
	UserInfo::GetAccountType
	Pop $1
	# GetOriginalAccountType will check the tokens of the original user of the
	# current thread/process. If the user tokens were elevated or limited for
	# this process, GetOriginalAccountType will return the non-restricted
	# account type.
	# On Vista with UAC, for example, this is not the same value when running
	# with `RequestExecutionLevel user`. GetOriginalAccountType will return
	# "admin" while GetAccountType will return "user".
	UserInfo::GetOriginalAccountType
	Pop $2
	StrCmp $1 "Admin" 0 +3
		;MessageBox MB_OK 'User "$0" is in the Administrators group${REALMSG}'
        ;ExecShell runas '"$INSTDIR\drivers\installdrivers.bat" /c /q /sa /sw /PATH "$INSTDIR\drivers"'
        ExecWait '"$INSTDIR\drivers\dpinst-x86.exe" /PATH "$INSTDIR\drivers"'
		Goto done
	StrCmp $1 "Power" 0 +3
		;MessageBox MB_OK 'Please run this installer as an administrator, so it can install drivers.'
		Goto done
	StrCmp $1 "User" 0 +3
		;MessageBox MB_OK 'Please run this installer as an administrator, so it can install drivers.'
		Goto done
	StrCmp $1 "Guest" 0 +3
		;MessageBox MB_OK 'Please run this installer as an administrator, so it can install drivers.'
		Goto done
	MessageBox MB_OK "Unknown error"
	Goto x86done

	x86Win9x:
		# This one means you don't need to care about admin or
		# not admin because Windows 9x doesn't either
		MessageBox MB_OK "Error! This DLL can't run under Windows 9x!"

	x86done:
    ExecWait '"$INSTDIR\drivers\dpinst-x86.exe" /c /q /sa /sw /PATH "$INSTDIR\drivers"'
  ${EndIf}
  
  ;Store installation folder
  WriteRegStr HKCU "Software\AbSim" "" $INSTDIR
  
  !ifdef icon
    WriteRegStr HKCR "AbSim\DefaultIcon" "" "$INSTDIR\${icon}"
  !endif
  
  ;Create uninstaller
  WriteUninstaller "$INSTDIR\Uninstall.exe"
  
  !insertmacro MUI_STARTMENU_WRITE_BEGIN Application
    
    ;Create shortcuts
    CreateDirectory "$SMPROGRAMS\$StartMenuFolder"
    CreateShortcut "$SMPROGRAMS\$StartMenuFolder\Uninstall.lnk" "$INSTDIR\Uninstall.exe"
    CreateShortcut "$SMPROGRAMS\$StartMenuFolder\AbSim.lnk" "$INSTDIR\sim.exe" "" "$INSTDIR\icon.ico"
    CreateShortCut "$DESKTOP\AbSim.lnk" "$INSTDIR\sim.exe" "" "$INSTDIR\icon.ico"
  
  !insertmacro MUI_STARTMENU_WRITE_END
  
  

SectionEnd

;--------------------------------
;Descriptions
  ;Language strings
  LangString DESC_SecAbSimCore ${LANG_ENGLISH} "Core files required to run AbSim."

  ;Assign language strings to sections
  !insertmacro MUI_FUNCTION_DESCRIPTION_BEGIN
    !insertmacro MUI_DESCRIPTION_TEXT ${AbSimCore} $(DESC_SecAbSimCore)
  !insertmacro MUI_FUNCTION_DESCRIPTION_END
 
;--------------------------------
;Uninstaller Section

Section "Uninstall"

  ;ADD YOUR OWN FILES HERE...
  Delete "$INSTDIR\*.*"

  Delete "$INSTDIR\Uninstall.exe"

  RMDir "$INSTDIR"
  
  !insertmacro MUI_STARTMENU_GETFOLDER Application $StartMenuFolder
    
  Delete "$SMPROGRAMS\$StartMenuFolder\Uninstall.lnk"
  RMDir "$SMPROGRAMS\$StartMenuFolder"
  
  DeleteRegKey /ifempty HKCU "Software\AbSim"

SectionEnd