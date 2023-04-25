import string_
s=input("enter string:-")
sp_char=input("enter charecter want to check:-")
for x in s.split():
	if string_.endswith(x,sp_char):
		print(x,end=" ")