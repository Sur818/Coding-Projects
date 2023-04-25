l=[x for x in eval(input("enter tuples with some empty tuples also:--"))]
print(l)
print([x for x in l if len(x)>0])