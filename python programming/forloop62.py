list=input("enter sentence:-").split(' ')
list1=[]
for x in list:
 list1.append(x[::-1])
print(' '.join(list1))