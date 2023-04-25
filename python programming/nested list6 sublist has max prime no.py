l=eval(input("enter nested list:-"))
temp=0
def isprime(n):
	f=0
	for i in range(1,n+1):
		if n%i==0:
			f+=1
	if f==2:
		return True
	else:
		return False
		


def count_isprime(l):
	count=0
	for item in l:
		if isprime(item):
			count+=1
	return count

for x in l:
	res=count_isprime(x)
	if res>temp:
		ans=x
		temp=max(temp,res)
print("no of sublist having no  of prime is max=\n",ans)
