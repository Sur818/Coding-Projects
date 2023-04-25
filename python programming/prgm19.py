from itertools import groupby
s=input("enter string:-")
print("after removing  adjecent duplicates:- ")
ans=list(groupby(s))
for key,group in ans:
	print(key)
