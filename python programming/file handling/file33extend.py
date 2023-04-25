def countmemy():
	f=open("Story.txt",'r')
	a=f.read()
	c=0
	for i in a.split(' '):
		if i.upper()=='MY' or i.upper()=='ME':
			c+=1
	return c

ans=countmemy()
print(ans)
	
