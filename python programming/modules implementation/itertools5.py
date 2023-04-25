import itertools
s=input("enter string :-")
ans=list(itertools.permutations(s))
print("all permutations:----->")
for x in ans:
	print("".join(x))