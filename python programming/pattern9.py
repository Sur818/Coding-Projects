n=int(input("enter row :-"))
k=2*n
for i in range(n):
	for j in range(i):
		print(k,end="")
		if k>=10:
			print(end=" ")
		else:
			print(end="  ")
		k-=1
		
	print("\n")