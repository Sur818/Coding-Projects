import itertools
def findsubsets(s, n):
 	return itertools.combinations(s,n)

l=[]
s=input("enter no:-").split(' ')
target=int(input("enter target:-"))
for i in range(1,len(s)+1):
	ans=list(findsubsets(s,i))
	for j in range(len(ans)):
		l.append(ans[j])
for i in range(len(l)):
	a=sum(list(map(lambda x:int(x) ,l[i])))
	if a==target:
		print("Yes")
		exit(0)
for x in s:
	if target%int(x)==0:
		print("Yes")
		exit(0)
else:
	print("No")

		



	
	

	

	
			
	
		


	


 	

   
