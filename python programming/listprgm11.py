n=int(input("enter no of sublist:-"))
l=[]
for i in range(n):
	l.append(list(map(int,input("enter no in list:-").split(' '))))
l=sorted(l,key=len)
print(l)