l1=['s','u','r','a','j']
l2=['i','n','g']
print(any(set(l1).intersection(set(l2))))


l2=['s','i','n','g','h']
res=set(l1).intersection(set(l2))
print(any(res))