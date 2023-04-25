import itertools
n=int(input("enter no of term:-"))
l=[int(input()) for x in range(n)]
print(l)
l1=[]
ans=list((itertools.combinations(l,3)))
for x in ans:
	ans1=list(itertools.permutations(x))
	for k in range(len(ans1)):
		l1.append(ans1[k])
print(l1)			
print('\n')
print("pairs for real and distinct root:-")
for x in l1:
		if x[1]*x[1]-4*x[0]*x[2]>0:
			print(x)
print("\n")
print(" pairs for real and equal root:-")
for x in l1:
		if x[1]*x[1]-4*x[0]*x[2]==0:
			print(x)
print("\n")
print("pairs for complex root:-")
for x in l1:
		if x[1]*x[1]+4*x[0]*x[2]<0:
			print(x)
		
		