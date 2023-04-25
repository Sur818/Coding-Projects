from itertools import groupby
l=eval(input("enter data to group the anagram pair:-"))
print("grouping anagram pairs:-")
for key,group in groupby(l,sorted):
	print(tuple(group))
