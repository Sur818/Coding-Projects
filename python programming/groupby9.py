from itertools import groupby
nums=eval(input("enter data:-"))
print("grouping the data:-")
for k,v in groupby(nums,key=lambda x:x>=0):
    print(list(v))