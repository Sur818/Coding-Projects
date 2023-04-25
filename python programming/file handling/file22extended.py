f=open("file22.txt",'r')
a=f.read()
print(a)
name=input("enter name want to capitalllize:-")
ans=name[0].upper()+name[1::]
a=a.replace(name,ans)
#print(a)
f=open("file22updated.txt",'w')
f.write(a)
			
	