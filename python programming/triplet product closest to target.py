import sys
def triplet_productarget(l,product):
	diff=sys.maxsize
	res="Not found"
	for i in range(len(l)-1):
			if l[i]!=0:
				for j in range(i+1,len(l)):
					if l[j]!=0:
						quo=int(product/(l[i]*l[j]))
						if quo in l and quo<diff and l.index(quo)>j:
		
							diff=quo
							res=(l[i],l[j],quo)
	return res
							
								
							
							
					
				
	

l=eval(input("enter list:-"))
product=int(input("enter target:-"))
print(triplet_productarget(l,product))
#l[i]<l[j]<l[k] such that i<j<k