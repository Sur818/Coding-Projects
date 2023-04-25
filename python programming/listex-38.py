l=list(map(int,input("enter no in list:-").split(' ')))
for i in range(0,len(l)-1,2):
	temp=l[i]
	l[i]=l[i+1]
	l[i+1]=temp
print(l)