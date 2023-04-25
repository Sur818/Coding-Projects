n=int(input("enter no:-"))
count=0
while (n>0):
  count=count+1
  n=n//10
print("no of digits={}".format(count))