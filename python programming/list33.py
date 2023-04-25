def sorted_wrtlast(list):
	list.sort(key=lambda x:x[1])
	return list

l=[]
n=int(input("enter no of tuples:-"))
for i in range(n):
	a,b=map(int,input('enter two no in tuple:-').split(','))
	t=(a,b)
	l.append(t)
print("list of tupels are:--")
print("after sorting:-")
print(sorted_wrtlast(l))