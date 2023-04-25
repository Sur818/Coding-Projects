import sys
def triplet_productarget(l,product):
	diff=sys.maxsize
	res="Not found"
	flag=0
	for i in range(len(l)-1):
			if l[i]!=0:
				for j in range(i+1,len(l)):
					if l[j]!=0:
						quo=int(product/(l[i]*l[j]))
						if quo in l and quo<diff and l.index(quo)>j:
		
							diff=quo
							flag=1
							res=(l[i],l[j],quo)
	if flag==0 and product==0:
			return (l[0],l[1],l[2])
			
			
	return res
							
								
							
							
					
				
	

l=eval(input("enter list:-"))
product=int(input("enter target:-"))
print(triplet_productarget(l,product))
#l[i]<l[j]<l[k] such that i<j<k