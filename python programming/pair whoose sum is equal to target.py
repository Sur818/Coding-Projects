#prgm find pair whoose sum equal to target using sorting method(o(nlogn))
def pair_sumtrgt(l,m):
	start=0
	end=len(l)-1
	l.sort()
	for i in range(len(l)):
		if l[start]+l[end]<m:
			start+=1
		elif l[start]+l[end]>m:
			end-=1
		else:
			return (l[start],l[end])
	
l=eval(input("enter list:-"))
m=int(input("enter target:-"))
print(pair_sumtrgt(l,m))
		