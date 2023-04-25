from collections import Counter
l=eval(input("enter data in list:-"))
res=Counter(l)
max_=max(res.values())
for x in res:
	if res[x]==max_:
		print(x)


