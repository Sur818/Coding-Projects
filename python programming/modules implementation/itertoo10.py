import itertools
l=list(map(int,input("enter list of no:-").split(' ')))
temp=0
l1=[]
print("pairs whoose sum is max:--")
for i in range(1,len(l)+1):
	ans=list(itertools.combinations(l,i))
	for x in ans:
		l1.append(x)
for x in l1:
	if sum(x)>temp:
		temp=sum(x)
		ans=x
print(ans)

		