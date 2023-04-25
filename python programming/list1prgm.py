l=[]
s=input("enter string:-").split(' ')
s=''.join(s)
for i in range(0,len(s),2):
	a=s[i]
	b=s[i+1]
	l.append((a,b))
print(l)