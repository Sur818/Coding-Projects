def pairsummin(l):
	if len(l)>=2:
		min_l=0
		min_r=1
		min_sum=l[0]+l[1]
		for i in range(0,len(l)-1):
			for j in range(i+1,len(l)):
				sum=l[i]+l[j]
				if abs(min_sum)>abs(sum):
					min_sum=sum
					min_l=i
					min_r=j
		return (min_l,min_r)
	print("invalid input")
	return exit(0)
				
	
	

l=eval(input("enter nested list:-"))
ans=list(map(pairsummin,l))
print("total pairs of each sublist whose sum closest to zero:-")
for i in range(len(l)):
	print(f"pairs={ans[i][0]},{ans[i][1]} for sublist{l[i]}")