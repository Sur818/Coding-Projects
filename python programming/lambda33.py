n=int(input("enter range-"))
print(" all perfect no in given range:---")
for i in range(1,n+1):
	s=str(i)
	ans=sum(list(filter(lambda x:True if 			int(s)%x==0 else False,[i for i in range(1,	int(s))])))
	if ans==int(s):
		print(i)