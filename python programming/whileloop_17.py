n=int(input("enter no:-"))
sum=0
while(n>0):
	n1=n%10
	sum=sum+n1
	n=n//10
print("sum of digit of no:-",sum)