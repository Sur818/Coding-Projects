from collections import Counter
l1=eval(input("enter element:-"))
l2=eval(input("enter element:-"))
l3=eval(input("enter element:-"))
d1=Counter(l1)
d2=Counter(l2)
d3=Counter(l3)
res=(d1&d2&d3)
common=[]
for (key,val) in res.items():
	for i in range(val):
		common.append(key)
print(common)
		