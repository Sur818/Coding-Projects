n=input("enter no:-")
n='.'.join(n)
n=n.split(".")
n1=len(n)
sum=int(n[0])+int(n[n1-1])
print("sum of first and last digits={}".format(sum))
