n=int(input("enter no:-"))
temp=str(n)
rev=0
for i in range(len(temp)):
  n1=n%10
  rev=rev*10+n1
  n=n//10
print("reverse of no:-",rev)
  
