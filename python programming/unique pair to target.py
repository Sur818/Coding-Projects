#two pointer algorothm:-
#count unique pair whoose sum is equal to target:----->
def unique_pair(l,m):
	i=0
	j=len(l)-1
	res=0
	while(i<j):
		if l[i]+l[j]==m and l[i]!=l[j]:
			i+=1
			j-=1
			res+=1
		elif l[i]+l[j]<m:
			i+=1
		else:
			j-=1
	return res
	
	
l=eval(input("enter list:-"))
m=int(input("enter target:-"))
print(unique_pair(l,m))
		
			
	
		
		