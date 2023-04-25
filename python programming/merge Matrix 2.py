#prgm to add n merge n matrix(row wise) without usig extra space
from functools import reduce
def merge_rowwise(l):
	k=0
	for all_matrix in zip(*l):
		res=list(reduce(lambda x,y:x+y,all_matrix))
		l[k]=res
		k+=1
	return l[:k]
		
			
		
			
n=int(input("enter no of matrix:-"))
l=[]
for i in range(n):
	print(f"enter data in matrix[{i+1}]")
	m=eval(input("enter matrix:-"))
	l.append(m)
print(merge_rowwise(l))
	