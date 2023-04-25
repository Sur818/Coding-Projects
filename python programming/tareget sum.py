#check sublist present whoose sum is equal to target:-->
#bruteforce approach
def subarray_target(l,m):
	for i in range(len(l)):
		s=l[i]
		for j in range(i+1,len(l)):
			s+=l[j]
			if s==m:
				return True
	return False


l=eval(input("enter data in list:-"))
m=int(input("enter target:-"))
print(subarray_target(l,m))
		
