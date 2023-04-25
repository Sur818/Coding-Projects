def factorial(n):
	if n==1:
		return 1
	return n*factorial(n-1)

def perfect_no(sum,no):
	if no==0:
		return sum
	print(no%10,end='!')
	if no//10>0:
		print("+",end="")
	return perfect_no(sum+factorial(no%10),no//10)
n=int(input("enter no:-"))
x=perfect_no(0,n)
if x==n:
	print("\nperfect_no:-")
else:
	print("\n not perfect no:-")

	