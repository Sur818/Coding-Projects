def HCF(list):
	for i in range(1,min(list)+1):
		f=0
		for x in list:
			if x%i!=0:
				f=1
		if f==0:
			ans=i
	return ans

list=[]
n=int(input("enter how many no want to enter:-"))
for i in range(n):
			data=int(input("enter data:-"))
			list.append(data)
print(HCF(list))
			
	