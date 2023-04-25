n=int(input("enter no:-"))
sq=str(n*n)
n=str(n)
ans=sum(map(lambda a,b:1 if a==b else 0 , n[::-1],sq[::-1]))
if ans==len(n):
	print('automorphic no:-')
else:
	print(" not automorohic no:-")