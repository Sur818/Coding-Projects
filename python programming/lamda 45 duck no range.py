

n=int(input("enter range:-"))
for i in range(1,n+1):
	i=str(i)
	if int(i[0])!=0 and len(list(filter(lambda 	x: True if int(x)==0 else False ,i)))!=0:
			print(i)
	
