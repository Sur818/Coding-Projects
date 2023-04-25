tup=(1,2,3)
list=[1,2,3]
list[len(list)::]=tup[0::]
print(list)


tup1=(1,2,3)
list1=[1,2,3]
print(tup1+tuple(list1))