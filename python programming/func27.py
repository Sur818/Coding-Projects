def func(s):
	count=0
	for x in s:
		if x!='0':
			count+=1
	return count
		
	
n=input("enter no:-")
print("no of nonzero digits=",func(n))