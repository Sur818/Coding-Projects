def longest_distance(l):
	i=0
	distance=0
	for i in range(len(l)):
		for j in range(i+1,len(l)):
			if l[i]=='1'and l[j]=='0':
				distance=max(distance,j-i)
	return distance-1	
	

l=input("enter 1's and 0's:-")
print(longest_distance(l))			
		
	