n=int(input("enter no:-"))
z=n
length=len(str(n))
rev=0
for i  in range(length):
  n1=n%10
  rev=rev*10+n1
  n=n//10
if(rev==z):
 print("pelindrome no:-")
else:
 print("not pelindrome:-")