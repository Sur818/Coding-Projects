def sort(l):
	for i in range(1,len(l)):
		key=l[i]
		j=i-1
		while j>=0 and l[j]>key:
			l[j+1]=l[j]
			j=j-1
		l[j+1]=key
	return l
	
	




n=int(input("enter no of datat:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
print(sort(l))