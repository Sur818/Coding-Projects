n=int(input("enter no:-"))
sum=0
for i in range(1,11):
 temp=n*i
 print("{}*{}={}".format(n,i,temp))
 sum=sum+temp
print("sum of tabble=",sum)