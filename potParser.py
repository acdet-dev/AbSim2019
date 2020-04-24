"""
Utility function to transfer pot text quickly.
Runs out of AbSim. Included in project for storage purposes.
"""

with open("C:\\Users\\Steve\\PyCharmProjects\\AbSim2019\\absim_strings.pot", "r+") as f1:
	s_list = f1.readlines()
	substring = 'msgid "'
	for i in range(0, len(s_list)):
		if substring in s_list[i]:
			print(s_list[i+1])
			a = s_list[i+1].replace('""', '"' + s_list[i][7:-2] + '"')
			s_list[i+1] = a

with open("C:\\Users\\Steve\\PyCharmProjects\\AbSim2019\\i18n\\abtemplate.txt", "w") as f2:
	f2.writelines(s_list)
f1.close()
f2.close()
