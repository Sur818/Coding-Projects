
n=int(input("enter no of term:-"))
print("enter element in first list:-")
l1=[int(input(f"l1[{x+1}]=")) for x in range(n)]
print("enter element in second list")
l2=[int(input(f"l2[{x+1}]=")) for x in range(n)]
print("product of consicutive element are:-")
print(list(map(lambda a,b:a*b,l1,l2)))

