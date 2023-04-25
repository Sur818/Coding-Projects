#k diffrence pair
#O(n),O(n)
def k_difrencepair(l,n,k):
	dict={}
	for i in l:
		dict[i]=dict.get(i,0)+1
	
	
	for i in range(n):
		count=0
		if dict.get(l[i]+k):
			print(l[i],l[i]+k)
			count+=1
		



l=eval(input("enter list:-"))
k=int(input("enter target:-"))
k_difrencepair(l,len(l),k)
