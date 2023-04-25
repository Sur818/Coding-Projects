#prgm sort on the basis of second element of tuple
l=eval(input("enter list of tuples:-"))
for i in range(len(l)):
	for j in range(i+1,len(l)-i-1):
		if l[j][1]>l[j+1][1]:
			temp=l[j]
			l[j]=l[j+1]
			l[j+1]=temp
print(l)


#sorted(l,key=lambda x:x[1])
	
