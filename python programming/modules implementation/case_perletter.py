import word_case ,casepercentage
s=input("enter string:-").split()
s1=""
for x in s:
	s1=s1+casepercentage.case_percantage(x)+" "
print(s1)
	
