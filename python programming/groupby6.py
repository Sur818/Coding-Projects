from itertools import groupby
l=eval(input("enter data:-"))
print("group the element on basis of length:-")
for key,group in groupby(l,len):
	print("length:",key,'=',tuple(group))

