l1=list(map(int,input("enter no in list1:-").split(' ')))
l2=list(map(int,input("enter no in list2:-").split(' ')))
diff1=list(set(l1)-set(l2))
diff2=list(set(l2)-set(l1))
print(diff1+diff2)