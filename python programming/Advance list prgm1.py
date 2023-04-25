l=eval(input("enter list of tuples:-"))
k=int(input("enter digits elements you want to astract:-"))
res=list(filter(lambda x: all(len(str(ele))==k for ele in x),l))
print(res)