#Two pointer method::--------------:>
def triplet_sum(l,m):
	l.sort()
	res=0
	for k in range(len(l)-2):
		i=k+1
		j=len(l)-1
		while (i<j):
			if l[k]+l[i]+l[j]>m:
				j-=1
			elif l[k]+l[i]+l[j]<m:
				i+=1
			else:
				res+=1
				i+=1
				j-=1
	return res
	
l=eval(input("enter data:-"))
m=int(input("enter target value:-"))
print(triplet_sum(l,m))
				
		
					
		