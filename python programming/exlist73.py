from itertools import groupby
l=eval(input("input list:-"))
print("after removing consicutive element:--")
for key,group in groupby(l):
	print(key,list(group))