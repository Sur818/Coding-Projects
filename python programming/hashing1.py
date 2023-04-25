#hashing to get pair with zero sum---->
def pair_zerosum(l):
	count=0
	dict={}
	for i in range(len(l)):
		if dict.get(-l[i]):
			count+=dict[-l[i]]
			#print(l[i],-l[i])
		dict[l[i]]=dict.get(l[i],0)+1
	return count
		
l=eval(input("enter list:-"))
print(pair_zerosum(l))
