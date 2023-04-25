def find3Numbers(A,arr_size,sum):
	for i in range(0,arr_size-1):
		s=set()
		curr_sum=sum-A[i]
		for j in range(i+1,arr_size):
			if curr_sum-A[j] in s:
				print(A[i],A[j],(curr_sum-A[j]))
				return True
			s.add(A[j])
	return False
 
A=eval(input("enter list:-"))
sum = 6
arr_size = len(A) 
print(find3Numbers(A, arr_size, sum))