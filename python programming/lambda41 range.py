n=int(input("enter range:-"))
for i in range(1,n+1):
	if(len(list(filter(lambda x:True if x*(x+		1)==i else False , [x for x in range(1,			int(i/2)+1)]))))!=0:
		print(i)
