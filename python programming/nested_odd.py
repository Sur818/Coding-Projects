n = int(input("Enter n: "))
_sum = 0

print("\n\nSeries is: ")
for i in range(1, n+1):
    print("(", end="")
    for j in range(1, 2*i, 2):
        if(j < 2*i-1):
            print(j, end="+")
        else:
            print(j, end="")
    if(i < n):
        print(")+", end="")
    else:
        print(")", end="")
    _sum += (i*i)
        
print("\n\nSum is: ", _sum)