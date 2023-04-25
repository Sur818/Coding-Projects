import itertools
def findsubsets(s, n):
 	return itertools.combinations(s,n)
 	
f=0
s=list(map(int,input("enter no:-").split(' ')))
target=int(input("enter target:-"))
print("pair of target sum====-->")
for i in range(2,len(s)+1):
	ans=list(findsubsets(s,i))
	for x in ans:
		if sum(x)==target:
			print(x)
			f+=1

for x in s:
	sum=0
	if target%x==0:
		f+=1
		print("(",end=" ")
		while sum!=target:
			print(x,end=" ")
			sum+=x
		print(")")
if f==0:
		print("no such pair exist:-")
		
			
	


		
	
			
	
		


	
