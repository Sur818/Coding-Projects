n1=int(input("enter no of data:-"))
l1=[int(input(f"l1[{x+1}]=")) for x in range(n1)]
n2=int(input("enter no of data in list2:-"))
l2=[int(input(f"l2[{x+1}]=")) for x in range(n2)]
ans=list(filter(lambda a: a not in l1 ,l2))
print("union of both function:-")
print(ans+l1)
