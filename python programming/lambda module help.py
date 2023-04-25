import primecheckmodule
n=int(input("enter no of term:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
print("prime no are in list:--")
print(list(filter(lambda x : True if primecheckmodule.isprime(x) else False,l)))