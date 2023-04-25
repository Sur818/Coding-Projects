l=eval(input("enter list:-"))
sum=0
for x in l:
	if type(x) is int:
		for y in str(x):
			sum+=int(y)
print(sum)
