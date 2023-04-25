n1,n2=(input("enter no:-")).split(' ')
n1=int(n1)
n2=int(n2)
list=[]
n=min(n1,n2)
for i in range(1,n+1):
 if n1%i==0 and n2%i==0:
  list.append(i)
print("HCF=",max(list))
  
	