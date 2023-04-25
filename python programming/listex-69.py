print("program to remove duplicate sublist:-")
n=int(input("enter no of sublist:-"))
l=[]
for i in range(n):
	l.append(list(map(int,input("enter no in list:-").split(' '))))
print(l)
l1=[]
for x in l:
	if x not in l1:
		l1.append(x)
print(l1)