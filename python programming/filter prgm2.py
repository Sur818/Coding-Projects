tup=eval(input("enter data of tuple:"))
res=tuple(filter(lambda x: x!=None,tup))
print(res)



#prgm2
""""""""""""""""""""""""""""""""
given list of tuples remove only those tuple whose all elemet are None
ex:-[(1),(2,'a'),(7,8,9),(None,None),(None,)]
output=[(1),(2,'a'),(7,8,9)]
l=eval(input("list of tuples"))
res=tuple(filter(lambda x:not any(ele for ele in x if ele!=None),l))
print(res)
""""""""""""""""""""""""""""""""