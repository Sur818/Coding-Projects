l=eval(input("enter nested list:-"))
m=int(input("enter multiplication factor:-"))
l=[list(map(lambda a: a*m,x)) for x in l]
print(l)