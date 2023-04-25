l=eval(input("enter list of tulpe:-"))
i,j=map(int,input("enter ranges between len u req:-").split(' '))
res=list(filter(lambda x:len(x)>i and len(x)<j,l))
print(res)