n=int(input("enter size:-"))
print("entere elemnt in first list:-")
l1=[int(input(f"l1[{x+1}]=")) for x in range(n)]
print("enter elemnt in second list:-")
l2=[int(input(f"l2[{x+1}]=")) for x in range(n)]
print("enter element in 3rd list:-")
l3=[int(input(f"l3[{x+1}]=")) for x in range(n)]
print(list(map(lambda a,b,c:a+b+c ,l1,l2,l3)))

