def sumofallfactor(n):
	sum=0
	for i in range(1,n):
		if n%i==0:
			sum+=i
	return sum
	
def perfect_no(n):
	sum=sumofallfactor(n)
	if sum==n:
		return True
	else:
		return False
		
n=int(input("enter no:-"))
if perfect_no(n):
	print("perfect no:-")
else:
	print("not perfect no:-")