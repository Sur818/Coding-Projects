n=int(input("enter no of sublist:-"))
l=[]
for i in range(n):
	l.append(list(map(int,input("enter no in list:--").split(' '))))
d=int(input("enter target no:-"))
l=sorted(l,key=lambda x :abs(sum(x)-d))
print(l)
	




	