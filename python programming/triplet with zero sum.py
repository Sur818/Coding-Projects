#triplet whoose sum==0 i<j<k and l[i]<l[j]<l[k]
def triplet_sumzero(l,sum):
	res=0
	for i in range(len(l)-2):
		dict={}
		for j in range(i+1,len(l)):
			b=sum-(l[i]+l[j])
			if b in dict:
				print(l[i],b,l[j])
				res+=dict[b]
			dict[l[j]]=dict.get(l[j],0)+1
	return res
			

l=eval(input("enter list:-"))
sum=int(input("enter target:-"))
print(triplet_sumzero(l,sum))
				
			
			
		