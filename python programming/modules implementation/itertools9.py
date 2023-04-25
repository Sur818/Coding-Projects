import itertools
def isprime(n):
	f=0
	for i in range(1,n+1):
		if n%i==0:
			f+=1
	if f==2 :
		return True
	else:
		return False


l=list(map(int,input("enter list of no:-").split(' ')))
l1=[]
for i in range(1,len(l)+1):
	ans=list(itertools.combinations(l,i))
	for x in ans:
		l1.append(x)
#print(l1)
print("all possible subsequence whoose sum are prime:----")
for x in l1:
	if isprime(sum(x)):
		print(x)