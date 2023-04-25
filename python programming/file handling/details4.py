f=open("details.txt",'r')
line=int(input("enter line   no want to delete:-"))
a=f.readlines()
for i in range(len(a)):
		if i+1==line:
			a.pop(i)
for x in a:
	print(x.strip())
f=open("detailsupdate1.txt",'w')
f.writelines(a)

			
		
