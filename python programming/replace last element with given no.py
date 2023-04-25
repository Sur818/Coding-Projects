l=eval(input("enter list of tuples:-"))
ele=eval(input("enter element want to replace:-"))
res=[x[0:-1:]+(100,) for x in l]
print(res)

