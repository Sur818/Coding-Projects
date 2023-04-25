def func(s,n):
	count=0
	length=0
	for i in range(len(s)):
		if s[i]==n:
			count+=1
			length=max(length,count)
		else:
			count=0
	return length

s=input("enter 1's and 0's:-")
n=input("enter no 1 or 0 to check :-")
print("max consicutive length:-")
print(func(s,n))			
		
	