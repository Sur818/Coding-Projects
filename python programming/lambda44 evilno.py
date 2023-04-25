n=bin(int(input("enter no:-")))
n=str(n[2::])
n=map(int,n)
#print(n)
ans=sum(list(filter(lambda x: True if int(x)==1 else False,n)))
if ans%2==0:
	print("evil no!")
else:
	print("not evil no!:-")


