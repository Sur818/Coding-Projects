
# count triplet such that i<j<k l[i]>l[j]>l[k]
def left_maximum(l,m):
	count=0
	for i in range(len(l)):
		if l[i]>m:
			count+=1
	return count
	
def right_minimum(l,m):
	count=0
	for i in range(len(l)):
		if l[i]<m:
			count+=1
	return count



def triplet(l):
	res=0
	for j in range(len(l)):
		res+=(left_maximum(l[:j],l[j])*right_minimum(l[j+1::],l[j]))
	return res
	
l=eval(input("enter list:-"))
print(triplet(l))
		
		
		
	