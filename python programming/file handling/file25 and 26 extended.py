with open("file25.txt",'r') as f1,open("file26.txt",'r') as f2:
	a=f1.readlines()
	b=f2.readlines()
	for i in range(len(a)):
		f=0
		if a[i]==b[i]:
			f+=1
		if f==0:
			print(f"line[{i+1}] is diffrent")
		
		
	
	
