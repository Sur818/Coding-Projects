from operator import itemgetter
list=[{'name':'nandini','age':20},{'name':'manjeet','age':20},{'name':'nikhil','age':19}]
#eval(input("enter list of dictionary:-"))
base=eval(input("enter base:-"))
res=sorted(list, key=itemgetter(base))
print(res)