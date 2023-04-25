n=int(input("enter no of list:-"))
l=[]
for i in range(n):
	sub=list(map(int,input("enter no:-").split(' ')))
	l.append(sub)
l1=[]
for x in l:
	for y in x:
		l1.append(y)
print(l1)