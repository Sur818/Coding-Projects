print("enter some +ve and nagetive no:-")
n=int(input("how many data want to enter:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
a=sum(list(map(lambda x: x if x>=0 else 0,l)))
b=sum(list(map(lambda x:x if x<=0 else 0,l)))
print("sum of +ve no in list=",a)
print("sum of -ve no in list=",b)