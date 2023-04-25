def specifiednoof_largestp(l1,l2,N):
	res=[]
	for x in l1:
		for y in l2:
			res.append(x*y)
	return sorted(res,reverse=True)[:N]
	
l1=eval(input("enter list1:-"))
l2=eval(input("enter list2:-"))
n=int(input("enter no of largest product:-"))
print("No of largest product from sqid list:-")
print(specifiednoof_largestp(l1,l2,n))
		