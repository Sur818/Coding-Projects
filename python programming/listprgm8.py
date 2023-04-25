l=[tuple(map(int,input("enter pair of no sapreted by space:-").split(' '))) for i in range(int(input("enter no of tuple:-")))]
print(l)

print(min(l,key=lambda x:x[1]))