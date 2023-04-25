n=int(input("enter size:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
pos=int(input("enter posn which element want to delete:-"))
l.pop(pos-1)
print(l)
