# AbSim2018
code for abdominal simulator by ACDET

For a variety of reasons, it will be really hard to include all dependencies and packages for this project here.

For starters, I began building this project in Windows on Msys2 with Python3 and Gtk+3. After completing the simulator software, I then desired to make an installer executable that could be distrubted to customers. Long story short, Python under Msys2 could not work with any of the top Python compiling packages out there (PyInstaller, Py2Exe, CxFreeze).

In Windows, on the other hand, I knew that all of these worked with Python, so I moved the project out of Msys2. Doing so meant that I would have to download Gtk and other dependencies again and set them up in my virtual environment for the project. This proved challenging. I finally found an installer for a run-time environment of GTK3: https://github.com/tschoonj/GTK-for-Windows-Runtime-Environment-Installer/releases I had to go back to Python 3.4 in my windows environment for this to work. I also had to get an older version of MSVC to compile with Python 3.4. Once I did all that, the project worked fine, and I was able to compile the scripts to an executable and then create an installer.

The project does not use many external packages beyond those included with Gtk and gi repository. Other than those though, it does make use of PySerial, Sqlite3, and LevenshteinDistance.
