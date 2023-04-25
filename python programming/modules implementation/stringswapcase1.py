import string_swapcase
s=input("enter string:-").split()
s1=""
for x in s:
	s1+=string_swapcase.swapcase_first(x)+" "
print(s1)
	
