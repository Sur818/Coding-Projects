l=[{'key1':'value1','key2':'value2'},{'key1':'value3','key2':'value4'}]
l1=[]
for x in l:
	d={}
	for  y in x:
		if y!='key1':
			d[y]=x[y]
	l1.append(d)
	
print(l1)
			