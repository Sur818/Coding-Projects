import itertools
def findsubsets(s, n):
 	return itertools.combinations(s,n)
 	
f=0
s=list(map(int,input("enter no:-").split(' ')))
target=int(input("enter target:-"))
for i in range(2,len(s)+1):
	ans=list(findsubsets(s,i))
	for x in ans:
		if sum(x)==target:
			f+=1
			print("Yes!")
			break
	if f!=0:
		break	
if f!=0:
	for x in s:
		if target%x==0:
			print("yes!")
			exit(0)
else:
	print("No!")


		
	
			
	
		


	


 	

