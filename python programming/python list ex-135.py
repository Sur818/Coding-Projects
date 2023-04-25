def abc(l):
	result=[]
	for i in range(len(l)-1):
		result.append((l[i],l[i+1]))
	return result
		
		
l=eval(input("enter list:-"))
print(abc(l))