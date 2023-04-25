#program find triplet having sum=0!
def triplet_zerosum(l):
	for i in range(len(l)):
		k=i+1
		r=len(l)-1
		while k<r:
			if l[i]+l[k]+l[r]==0:
				print(l[i],l[k],l[r])
				k+=1
				r-=1
			elif l[i]+l[k]+l[r]>=0:
				r-=1
			else:
				k+=1
	
l=eval(input("enter list:-"))
triplet_zerosum(l)			
				