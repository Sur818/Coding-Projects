l=list(map(int,input("enter no in list:-").split(' ')))
f=0
for x in l:
	if x==0:
		f+=1
for i in range(len(l)):
	l.remove(0)
	l.append(0)
print(l)
