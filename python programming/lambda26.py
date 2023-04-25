l1=input("enter no in list1:-").split(' ')
l2=input("enter no in list2:-").split(' ')
print("sum and diffrence of both respective list")
print(list(map(lambda x,y:(int(x)+int(y),int(x)-int(y)),l1,l2)))