import math
def sum_list(list):
	return math.prod(list)





list=[]
n=int(input("how many data want to enter:-"))
for i in range(n):
	data=int(input("enter data:-"))
	list.append(data)
print("prod of element in list=",sum_list(list))