import itertools
l=list(map(int,input("enter list of no:-").split(' ')))
target_sum=int(input("enter target no:-"))
l1=[]
for i in range(1,len(l)+1):
	ans=list(itertools.combinations(l,i))
	for x in ans:
		l1.append(x)
#print(l1)
print("all  possible whoose sum is =target sum:---")
for x in l1:
	if sum(x)==target_sum:
		print(x)