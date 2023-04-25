def devisor(a):
	if i%a==0:
		return True	

def perfect_no(i):		
	return sum(list(filter(devisor,[x for x in range(1,i)])))
n=int(input("enter range:-"))

for i in range(1,n+1):
		if perfect_no(i)==i:
			print(i)