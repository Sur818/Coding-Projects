#hashing to get pair with target sum---->
def pair_targetsum(l,b):
	count=0
	dict={}
	if len(l)<=1:
		return "Not found"
	for i in range(len(l)):
		if dict.get(b-l[i]):
			count+=dict[b-l[i]]
			#print(l[i],-l[i])
		dict[l[i]]=dict.get(l[i],0)+1
	return count
		
l=eval(input("enter list:-"))
b=int(input("enter target:-"))
print(pair_targetsum(l,b))
