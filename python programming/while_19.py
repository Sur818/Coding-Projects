n=int(input("enter  no:-"))
z=n
rev=0
while(n>0):
 rev=rev*10+n%10
 n=n//10
if rev==z:
 print("palindrome no")
else:
 print("not palindrome")