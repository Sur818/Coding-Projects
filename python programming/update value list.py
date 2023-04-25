d={'Math': [88, 89, 90], 'Physics': [92, 94, 89], 'Chemistry': [90, 87, 93]}
#d=eval(input("enter student data in dictionary:-"))
res={key:[val1+1 for val1 in val] for key,val in d.items()}
print(res)