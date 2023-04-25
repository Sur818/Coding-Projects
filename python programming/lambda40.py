m=int(input("enter range:--"))
print("automorphic no's in given range:-----")
for i in range(1,m+1):
	n=i
	sq=str(n*n)
	n=str(n)
	ans=sum(map(lambda a,b:1 if a==b 			else 0 , n[::-1],sq[::-1]))
	if ans==len(n):
		print(i)