list=[1,2,3,5,'hello',5,5,5,7,8,9,5,]
print(list)
for i in list:
	if i==5:
		list.remove(5) 
		i=i-1
print(list)
print(list)