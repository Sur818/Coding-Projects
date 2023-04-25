l=[]
a=tuple(map(int,input("enter  replace value and replacement value:-").split(' ')))
for i in range(0,len(a),2):
	l.append((a[i],a[i+1]))
print(l)





