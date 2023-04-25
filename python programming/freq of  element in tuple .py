from collections import Counter,defaultdict
tup=eval(input("enter tuple:-"))
"""""""""""""""""""""""""""""""""""

print(Counter(tup))

"""""""""""""""""""""""""""""""""""
res=defaultdict(int)
for x in tup:
	res[x]+=1
print(res)
""""""""""""""""""""""""""""""""""
dict=[]
for x in tup:
	if x not in dict.keys():
		dict[x]=1
	else:
		dict[x]+=1
print(dict)

"""""""""""""""""""""""""""""""""
dict={}
for x in set(tup):
	f=tup.count(x)
	dict[x]=f
print(dict)

"""""""""""""""""""""""""""""""""



