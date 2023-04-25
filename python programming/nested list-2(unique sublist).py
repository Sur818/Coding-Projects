l=eval(input("enter nested list:-"))
c=0
for x in l:
	if len(set(x))==len(x):
		c+=1
print("no of unique sublist=",c)

