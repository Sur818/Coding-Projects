def perfect_no(i):
	if n%i==0:
		return True

n=int(input("enter no:-"))		
ans=sum(list(filter(perfect_no,[x for x in range(1,n)])))
if ans==n:
	print("perfect no:-")
else:
	print("not perfect no:-")