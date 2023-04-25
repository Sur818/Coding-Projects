import math
n=int(input("enter no of term:-"))
l=[int(input(f"[{x+1}]=")) for x in range(n)]
prin()
print(list(map(lambda x:math.factorial(x),l)))