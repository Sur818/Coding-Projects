def prod(l):
	ans=1
	for x in l:
		ans*=x
	return ans

l=eval(input("enter nested list:-"))
print(max(l,key=prod))