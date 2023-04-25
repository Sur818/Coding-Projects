n=input("enter no:-")
n='.'.join(n)
n=n.split(".")
n1=len(n)
#swaping process starts:----->
temp=n[0]
n[0]=n[n1-1]
n[n1-1]=temp
#swapping process end---->
n=''.join(n)
print("after swaping first and last digit:-")
print(n)
