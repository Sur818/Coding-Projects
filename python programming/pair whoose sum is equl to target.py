#prgm count pair whoose sum==target!
def pair_sum(l,m):
	dict={}
	res=0
	if len(l)<=1:
		return False
	else:
		for i in range(len(l)):
			b=m-l[i]
			if b in dict:
				res+=dict[b]
			dict[l[i]]=dict.get(l[i],0)+1
	return res
	
l=eval(input("enter list:-"))
m=int(input("enter target value:-	"))
print(pair_sum(l,m))
			
			

			
			
		
		