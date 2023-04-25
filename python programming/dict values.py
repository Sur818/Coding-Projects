Sort Dictionary key and values List
dict={'c':[3],'b':[12,10],'a': [19, 4]}
res={}
for x in sorted(dict):
	res[x]=sorted(dict[x])
print(res)