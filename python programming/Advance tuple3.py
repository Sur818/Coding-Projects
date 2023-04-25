#sort tuple by there maximum value:-
l=eval(input("enter list of tuple:-"))
res=sorted(l,key=lambda x:max(x),reverse=True)
print(res)