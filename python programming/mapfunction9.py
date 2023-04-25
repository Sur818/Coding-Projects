
n=int(input("how many data want to enter:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
a=tuple(map(str,l))
print(a)