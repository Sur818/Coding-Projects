l1=input("enter no in list1:-").split(' ')
l2=input("enter no in list2:-").split(' ')
print("no of equal pari present in both list:-")
print(sum(list(map(lambda a,b: 1 if a==b  else 0 ,l1,l2))))
