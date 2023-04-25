l=eval(input("enter nested list:-"))
data=eval(input("enter data whose freq you want:-"))
ans=sum(list(map(lambda x:data in x,l )))
print(ans)