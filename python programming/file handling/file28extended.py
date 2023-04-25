f=open("file28.txt",'r')
a=f.read()
temp=0
for x in a:
	if x==x[::-1]:
		if len(x)>temp:
			ans=x
			temp=len(x)
print("longest palindromic word=",ans)
			