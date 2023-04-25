test=eval(input("enter test dictionaty:-"))
l=eval(input("enter data in list same length as dictionary:-"))
res={x:{key:val} for x,(key,val) in zip(l,test.items())}
print(res)