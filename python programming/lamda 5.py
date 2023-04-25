greater=lambda n1,n2: n1 if n1>n2 else n2

n1,n2=map(int,input("enter two no:-").split(' '))
print("greater no=",greater(n1,n2))