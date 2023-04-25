from collections import Counter
l=eval(input("enter data in list:-"))
dict=Counter(l)
res={key:[key]*val for key,val in dict.items()}
print(res)