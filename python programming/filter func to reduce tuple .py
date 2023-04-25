l=eval(input("enter list of tuples:-"))
k=int(input("enter length of tuple you want to remove"))
res=list(filter(lambda x:len(x)!=k,l))
print(res)
