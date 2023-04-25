n=input("enter no:-")
length=len(n)
n=int(n)
z=n
sum=0
for i in range(length):
	n1=n%10
	sum=sum+n1*n1*n1
	n=n//10
if sum==z:
 print("armstrong no:-")
else:
 print("not armstrong no:-")
	