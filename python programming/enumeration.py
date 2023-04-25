#enumerate generate key automatically::->
l=list(range(100,110))
print(l)
d={}
for x in enumerate(l):
		#print(x)
		d[x[0]]=x[1]
print(d)



print("\n\nafter start =10\n")
d={}
for x in enumerate(l,start=10):
	d[x[0]]=x[1]
print(d)

		