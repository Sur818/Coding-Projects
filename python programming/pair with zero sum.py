#hashing to get pair with target sum---->
def pair_zerosum(l,b):
	count=0
	for i in range(len(l)):
		if b-l[i] in l and l.index(b-l[i])>i:
			count+=1
			print(l[i],b-l[i])
	return count
		
l=eval(input("enter list:-"))
b=int(input("enter target:-"))
print(pair_zerosum(l,b))
