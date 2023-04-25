from itertools import product 
#its gives cartesian product
test_list=eval(input("enter list of number"))       
print("The original list is : " + str(test_list))
tar=int(input("enter target no:-"))
k=int(input("enter group size"))
res=[]
for sub in product(test_list,repeat=k):
  if sum(sub)==tar:
    res.append(sub)
                     
print(res)