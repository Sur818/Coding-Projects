n=int(input("enter range-"))
print(" all perfect no in given range:---")
def func(s):
	ans=sum(list(filter(lambda x:True if 			int(s)%x==0 else False,[i for i in range(1,	int(s))])))
	if ans==int(s):
		return True

ans=list(filter(func,[x for x in range(1,n+1)]))
for x in ans:
	print(x)