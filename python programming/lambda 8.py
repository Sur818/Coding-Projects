n=int(input("enter no of term:-"))
l=[int(input(f"[{x+1}]=")) for x in range(n)]
print(list(map(lambda x:2*x ,l)))