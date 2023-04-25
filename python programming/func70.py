def Lower_Uppercase(s):
	lower=0
	upper=0
	for i in s:
		if (i.isupper()):
			upper+=1
		elif(i.islower()):
			lower+=1
	return upper,lower

s=input("enter string:-")
upper,lower=Lower_Uppercase(s)
print(" no of uppercase charecter=",upper)
print("no of lowercase charecter=",lower)
			