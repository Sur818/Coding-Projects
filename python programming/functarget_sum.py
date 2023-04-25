def sum_element(l1):
	sum=0
	for x in l1:
		sum+=x
	return sum
		

def target_sum(l,target):
	ans="not found"
	temp=len(l)
	for i in range(len(l)):
		l1=[]
		for j in range(i,len(l)):
			l1.append(l[j])
			if sum_element(l1)==target and len(l1)<temp:
				ans=l1
				temp=len(l1)
	print(ans)
	
	
	
		

n=int(input("enter no:-"))
l=[int(input(f'l[{x+1}]=')) for x in range(n)]
sum=int(input("enter target sum:-"))
target_sum(l,sum)
