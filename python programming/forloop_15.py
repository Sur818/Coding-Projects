n1,n2=input("enter two no:-").split(" ")
n1=int(n1)
n2=int(n2)
prod= n1*n2
for i in range(max(n1,n2),(prod+1)):
   if i%n1==0 and i%n2==0:
    break
print(i)
   