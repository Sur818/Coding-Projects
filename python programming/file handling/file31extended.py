f=open("file31.txt",'r')
a=f.read()
for x in a.split(' '):
	if len(x)>ans:
		res=x
		ans=max(ans,len(x))
print(res)
		