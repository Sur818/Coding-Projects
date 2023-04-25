#using dictionary(you can say hashing:-):---->
def triplet_sum(l,m):
	res=0
	for i in range(len(l)-2):
		dict={}
		for j in range(i+1,len(l)):
			b=m-(l[i]+l[j])
			if b in dict:
				res+=dict[b]
				#print(l[i],b,l[j])
			dict[l[j]]=dict.get(l[j],0)+1
	return res
	
l=eval(input("enter list:-"))
m=int(input("enter target value:-"))
print(triplet_sum(l,m))
			
			
			
				
			
	