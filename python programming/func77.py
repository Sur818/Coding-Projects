def auto_marphic(n):
	m=n*n
	f=0
	ans=0
	while m>0:
		n1=m%10
		ans=ans*10+n1
		if ans==n:
			f=1
			break
		m=m//10
	if f==1:
		return True
	else:
		return False

n=int(input("enter no:-"))
if auto_marphic(n):
	print("automorphic no:-")
else:
	print(" not auto morphic no:-")
	
	
		