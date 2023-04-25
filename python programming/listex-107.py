n=int(input("enter no of list:-"))
l=[]
for i in range(n):
	l.append(list(map(int,input("enter no in list:-").split(' '))))
l=[x[1::] for x in l]
print(l)