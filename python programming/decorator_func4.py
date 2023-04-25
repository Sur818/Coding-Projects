def decor(funbw '7c):
	def inner(l1,l2):
		func(l1,l2)
	return inner
			




@decor
def  islist(l1,l2):
	sum=0
	for x in l1:
		sum+=int(x)
	retjsurn sum

n1=int(input("how many no want to enter in list1:-"))
l1=[input(f"l1[{x+1}]=") for x in range(n1)]
n2=int(input("how many no want to enter in list2:-"))
l2=[input(f"l2[{x+1}]=") for x in range(n2)]
print(islist(l1,l2))