import itertools,math
l=list(map(int,input("enter list of no:-").split(' ')))
temp=0
ans1=0
l1=[]
print("longetst pairs whoose prod is max:--")
for i in range(1,len(l)+1):
	ans=list(itertools.combinations(l,i))
	for x in ans:
		l1.append(x)
for x in l1:
	if math.prod(x)>=temp and len(x)>ans1:
		temp=math.prod(x)
		ans=x
		ans1=max(ans1,len(x))
		
print(ans)

