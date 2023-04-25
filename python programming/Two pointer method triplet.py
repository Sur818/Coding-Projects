#check triplet whoose sum ==target present or not:----->
#using two pointer algorithm.
def check_twosum(i,b,l):
	j=len(l)-1
	while i<j:
		if l[i]+l[j]>b:
			j-=1
		elif l[i]+l[j]<b:
			i+=1
		else:
			return True
	return False
			

def triplet_sum(l,m):
	for i in range(len(l)-2):
		if check_twosum(i+1,m-l[i],l):
			return True
	return False

l=eval(input("enter list:-"))
m=int(input("enter target value:-"))
print(triplet_sum(l,m))