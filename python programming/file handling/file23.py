f=open("file23.txt",'r')
a=f.readlines()
data=input("enter modifed line:-")
data=data+"\n"
line=int(input("enter line no where you want to insert:-"))
a[line-1]=data
#print(a)
f=open("file23updated.txt",'w')
f.writelines(a)