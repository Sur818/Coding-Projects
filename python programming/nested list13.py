l=eval(input("enter nested list:-"))
print("sort the sublist by length itself")
l=[sorted(x) for x in l]
l=sorted(l,key=lambda x:len(x))
print(l