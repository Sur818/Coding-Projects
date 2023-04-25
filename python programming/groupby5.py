from itertools import groupby
l=eval(input("enter nested list data:-"))
print("group the element on the basis if first element of every list:-")
for key,group in groupby(l,key=lambda x:x[0]):
	print(key,list(group))

	
