l1=list(map(int,input("enter no:-").split(' ')))
l2=list(map(int,input("enter no:-").split(' ')))
print("missing value in second list=",set(l1)-set(l2))
print("additional value in second list=",set(l2)-set(l1))