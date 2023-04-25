l=eval(input("enter tuple:-"))
res=sorted(l,key=lambda x:float(str(x[1]).split('.')[-1]))
print(res)

""""""""""""""""""""""""""""""""
s=('i',55.54)
print(str(s[1]).split('.')[-1])
""""""""""""""""""""""""""""""""