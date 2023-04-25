l=eval(input("enter list of tuples:-"))
k=int(input("enter digits elements you want to astract:-"))
res=[ele for ele in l if all(len(str(x))==k for x in ele)]
print(res)