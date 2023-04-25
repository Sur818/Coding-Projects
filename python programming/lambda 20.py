#tripal all no present in given list:-
n=int(input("enter no of term:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
print(list(map(lambda x : x*3 ,l)))