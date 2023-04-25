
def LCM(list):
	lcm=max(list)
	while True:
		f=0
		for x in list:
			if lcm%x!=0:
				f=1
		if f==0:
				return lcm
				break
			  
		lcm+=1
	

list=[]
n=int(input("enter how many no you want:----"))
for i in range(n):
	data=int(input("enter data enter:-"))
	list.append(data)
print(LCM(list))
	
	
			
			
		