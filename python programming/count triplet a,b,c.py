# sequential order of element is not importent---->>>>
#means you can rearrange the element in array:--->
#count total triplet such that a<b<c
def triplet(l):
	ans=0
	l.sort(reverse=True)
	for i in range(len(l)):
		j=i+1
		k=len(l)-1
		while j<k:
			ans+=(k-j)
			k-=1
	return ans
			
		


l=eval(input("enter list:-"))
print(triplet(l))

		