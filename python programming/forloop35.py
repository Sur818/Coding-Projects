n=input("enter no:-")
length=len(n)
n=int(n)
z=n
sum=0
for i in range(length):
 n1=z%10
 sum=sum*10+n1
 z=z//10
if(sum==n):
 print("palindrome no:-")
else:
 print("not pelindrome:-")

  
 