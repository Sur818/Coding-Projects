l=eval(input("enter nested list:-"))
l=[l[0].insert(l[-1],x) for x in l[1::]]
print(l)