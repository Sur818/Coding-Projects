i=0
def search(l,data):
	if l[globals()['i']]==data:
		return globals()['i']
	elif globals()['i']>=len(l)-1:
		return 'not found'
	globals()['i']+=1
	return search(l,data)

n=int(input("enter size of list:-"))
l=[int(input("l[i+1]=" ))for i in range(n)]
data=int(input("enter no want to search:-"))
print("found at index=",search(l,data))
	
	