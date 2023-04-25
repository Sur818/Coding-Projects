l=eval(input("enter nested  list:-"))
target=int(input("enter target value:-"))
for x in l:
	if sum(x)==target:
		print(x)

