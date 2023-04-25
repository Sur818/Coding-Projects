list=[10,20,30,40,50,60,70,10,[10,10]]
print("above list is:-",list);
n=len(list)
count=0
for x in list:
	if x==10:
		count=count+1
		
print("no of 10 in this list=",count)
for x in list:
	if x==10:
		list.remove(10)
		
print("print after removal of all 10 in list:-\n",list)