def even_no(l):
	for x in l:
		if x%2==0:
			yield x

l=[]
n=int(input("enter no of items:-"))
for i in range(n):
	data=int(input("enter data:-"))
	l.append(data)
print("even no are:-")
print(list(even_no(l)))