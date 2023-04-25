import itertools
n=int(input("enter no of term:-"))
l=[int(input()) for x in range(n)]
for i in range(len(l)):
	for j in range(i+1,len(l)+1):
		print(l[i:j])
	
	
