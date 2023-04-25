n=int(input("enter no of size:-"))
num = [int(input(f"num[{x}]=")) for x in range(n)]
num = [x for x in num if x%2!=0]
print(num)
