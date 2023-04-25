tup1=eval(input("enter data in tuple1:-"))
tup2=eval(input('enter data in tupl2:-'))
res=tuple(map(lambda x,y:x%y,[tup1,tup2]))
print(res)
