import sys
l=eval(input("enter no:-"))
tup=eval(input("enter target  tuple:-"))
k=int(input("enter value k:-"))
min_diff=sys.maxsize
for idx,val in enumerate(l):
	diff=abs(tup[k-1]-val[k-1])
	if diff<min_diff:
		min_diff,res=diff,idx
print(l[res])
	