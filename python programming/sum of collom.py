lis=eval(input("enter nested list:--"))
n=int(input("enter no of collom which collom sum you want:-"))
ans=sum(list(map(lambda x:x[n-1] ,lis)))
print(ans)