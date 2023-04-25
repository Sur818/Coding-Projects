#count pair such that i<j<k and l[i]<l[j]<l[k]---->
def triplet(l):
	res=0
	for i in range(len(l)-2):
		for j in range(len(l)-1):
			for k in range(len(l)):
				if l[i]<l[j]<l[k]:
					res+=1
	return res
						
l=eval(input("enter list:-"))
print(triplet(l))		
			
			
		