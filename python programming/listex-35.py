sample_list=['p','q']
new_list=[]
n=int(input("enter range:-"))
for i in range(1,n+1):
	for x in sample_list:
		new_list.append(x+str(i))
		
print(new_list)
		
		