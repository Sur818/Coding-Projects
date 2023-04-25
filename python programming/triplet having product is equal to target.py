def triplet_productarget(l,product):
	count=0
	for i in range(len(l)-1):
		if l[i]!=0 and product%l[i]==0:
			for j in range(i+1,len(l)):
				if l[j]!=0 and product%(l[j]*l[i])==0:
			
					if product//(l[j]*l[i]) in l:
					n=l.index(product//(l[j]*l[i]))
				if n>i and n>j:
					count+=1
	return count
	

	

l=eval(input("enter list:-"))
product=int(input("enter target:-"))
print(triplet_productarget(l,product))
#l[i]<l[j]<l[k] such that i<j<k
