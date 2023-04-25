import math_list
n=int(input("how many no want to enter:-"))
l=[input(f"l[{x+1}]=") for x in range(n)]
print(math_list.sort_list(l))
print(math_list.max_list(l))
