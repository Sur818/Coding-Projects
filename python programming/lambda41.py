n=int(input("enter no:-"))
if(len(list(filter(lambda x:True if x*(x+1)==n else False , [x for x in range(1,int(n/2)+1)]))))!=0:
	print(" pronic no:-")
else:
	print("not pronic no:-")

