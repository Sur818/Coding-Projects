def digit_sum(s):
	sum=0
	for x in s:
		sum+=int(x)
	return sum
n=input("enter no:-")
print(digit_sum(n))
	