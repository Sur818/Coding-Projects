list=[1,2,10,20,10,30,40,69,10,10]
print("given list is\n",list)
n=len(list)
count=0
for i in range(0, n):
	if list[i]==10:
	 count=count+1

print("removal of all 10 in above list")
for i in range(1,count+1):
 list.remove(10) 
print(list)	 