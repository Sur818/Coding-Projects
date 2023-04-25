from itertools import groupby
l=eval(input("enter data:-"))
print("group the list on basis of max element in list:-")
for key,group in groupby(l,max):
	print("max element :",key,'=',tuple(group))
