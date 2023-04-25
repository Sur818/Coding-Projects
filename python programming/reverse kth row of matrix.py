def reverse_k(l):
	for i in range(len(l)):
		if (i+1)%k==0:
			l[i].reverse()
	return l
	
l=eval(input("enter list:-"))
k=int(input("enter position:-"))
print(reverse_k(l))