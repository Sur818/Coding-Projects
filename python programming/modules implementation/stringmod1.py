import stringmod
s=input("enter string to reverse each word according to your given percentage:-")
s1=""
for x in s.split():
	print("word are:-",x)
	per=int(input("enter percantage:-"))
	s1=s1+stringmod.perc_reverse(x,per)+" "
print(s1)