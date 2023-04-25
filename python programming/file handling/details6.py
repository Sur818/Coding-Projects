f=open("details.txt",'r')
n1,n2=map(int,input("enter both line no which content want to exchange each othe:--").split(','))
a=f.readlines()
temp=a[n1-1]
a[n1-1]=a[n2-1]
a[n2-1]=temp
f=open("detailsupdate4.txt",'w')
f.write(a)