def max_no(a,b,c):
	ans=max(a,max(b,c))
	return ans
a,b,c=map(int,input("enter three no:-").split(' '))
print("max no:-",max_no(a,b,c))
