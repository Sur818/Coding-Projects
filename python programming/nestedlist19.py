def product(x):
	prod=1
	for i in x:
		prod=prod*i
	return prod
	
def longest_sub(l):
	res=max(l,key=lambda x:product(x))
	return res
		

l=eval(input("enter nested list:-"))
print("print sublist whoose product is max:-")
print(longest_sub(l))