def sum_list(list):
	sum=0
	for x in list:
		sum+=x
	return sum





list=[]
n=int(input("how many data want to enter:-"))
for i in range(n):
	data=int(input("enter data:-"))
	list.append(data)
print("sum of element in list=",sum_list(list))