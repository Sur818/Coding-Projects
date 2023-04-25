n=int(input("enter range:-"))
print("evil no's' in given range:----")
for i in range(1,n+1):
	l=str(bin(i))[2::]
	l=map(int,l)
	#print(l)

	ans=sum(list(filter(lambda x: True if 		int(x)==1 else False,l)))
	if ans%2==0:
		print(i)