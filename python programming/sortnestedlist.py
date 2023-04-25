l=[[10],[20],[5],[15],[30],[25]]
l.sort(key=lambda x:x[0])
print(l)
l1=[{'key':{'subkey':5}},{'key':{'subkey':10}},{'key':{'subkey':1}}]
l1.sort(key=lambda x:x['key']['subkey'])
print(l1)
l2=[[[10]],[[5]],[[1]],[[100]],[[0]]]
l2.sort(key=lambda x:x[0][0])
print(l2)
l3=[[1,2],[2,3],[2,6],[1,0],[10,-1]]
l3.sort(key=lambda x:x[1])
print(l3)