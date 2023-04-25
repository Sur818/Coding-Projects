n=(input("enter any no:-"))
z=int(n)
n='-'.join(n)
n=n.split("-")
length=len(n)
prod=1
for i in range(length):
 n1=z%10
 prod=prod*n1
 z=z//10
print("prod of digits of no:-",prod)
  
