sum=0
def factorial(n):
	if n==1:
		return 1
	return n*factorial(n-1)



def perfect_no(no):
	global sum
	if no==0:
		return sum
	sum+=factorial(no%10)
	print(no%10,end='!')
	if no//10>0:
		print("+",end="")
	return perfect_no(no//10)
n=int(input("enter no:-"))
x=perfect_no(n)
if x==n:
	print("\nperfect_no:-")
else:
	print("\nnot perfect no:-")

	
