n=int(input("enter size of list:-"))
l=[int(input(f'l[{x+1}]=')) for x in range(n)]
l.sort()
print(l)
pos=int(input("which psn element want respective heighest posn element:-"))
print(f"{pos} heighest element in list:-")
print(l[len(l)-pos])
