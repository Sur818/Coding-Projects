n=int(input("how many file want to create:-"))
for i in range(1,n+1):
	f=open(f"abc[{i}].txt",'w')
	print("write data in file:-")
	f.write(input("enter txt in file:-"))