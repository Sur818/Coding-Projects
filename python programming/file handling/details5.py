f=open("details.txt",'r')
a=f.readlines()
line=int(input("enter line no which want to reverse:-"))
if line>len(a):
	print("not possible:-")
else:
	a[line-1]=a[line-1][:len(a[line-1])-1:][::-1]+'\n'
	for line in a:
		print(line.strip(),end="\n")
f=open("detailsupdate2.txt",'w')
f.writelines(a)
	