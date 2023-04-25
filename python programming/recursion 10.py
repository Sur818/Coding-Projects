def count_digit(n):
	if n==0:
		return 0
	else:
		return n%10+count_digit(n//10)
n=int(input("enter no:-"))
print("sum of digit=",count_digit(n))