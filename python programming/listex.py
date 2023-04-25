n=int(input("enter no of list:-"))
l1=[]
for i in range(n):
 	l=list(map(int,input("enter no in list:-").split(' ')))
 	l1.append(l)
del(l)
l=[ x[::-1] for x in l1]
print(l)
	
		

		
		
	
	

 	