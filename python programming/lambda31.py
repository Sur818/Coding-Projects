s=input("enter no:-")
print("checking perfect no:-----")
ans=sum(list(filter(lambda x:True if int(s)%x==0 else False,[i for i in range(1,int(s))])))
if ans==int(s):
	print("perfect no:-")
else:
	print("not perfect no:-")