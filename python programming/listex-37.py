l1=list(map(int,input("enter no in list1:-").split(' ')))
l2=list(map(int,input("enter no in list2:-").split(' ')))
l=set(l1).intersection(set(l2))
print(l)