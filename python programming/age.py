age=int(input("Enter age:"))

if age<=18:
    print('person is child')
  
elif age>18 and age<=25:
    print('person is boy')

elif age>25 and age<=40:
    print('person is adult')

elif age>40 and age<=60:
    print('person is man')

else:
    print('you are old')