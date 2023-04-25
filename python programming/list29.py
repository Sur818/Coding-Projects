def longest_sum(l):
	max_sum=0
	for i in range(len(l)):
		sum=0
		for j in range(i,len(l)):
			sum=sum+l[j]
			if sum>max_sum :
				length=j-i+1
				max_sum=sum
			if sum==max_sum and j-i+1>length:
				length=j-i+1
	return (max_sum,length)

n=int(input("enter size of list:-"))
l=[int(input(f"l[{x}]=")) for x in range(n)]
print(longest_sum(l))
		