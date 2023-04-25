from itertools import combinations
l=list(map(int,input("enter no in list:-").split(' ')))
for i in range(len(l)+1):
	ans=list(combinations(l,i))
	for x in ans:
		print(x,end=' ')