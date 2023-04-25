import math
def sum_list(list):
	sum=0
	for x in list:
		sum+=x
	print(sum)

 
	
list=[]
n=int(input("enter no of element in list:-"))
for i in range(n):
	data=int(input("enter input data:-"))
	list.append(data)
sum_list(list)

