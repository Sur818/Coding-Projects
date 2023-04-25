f=open("details.txt",'r')
a=f.readlines()
for x in a:
	count=0
	#print(x.strip().split(' '))
	for y in x.split(' '):
		count+=1
	print(f"word in line={x.strip()}=",count)
	