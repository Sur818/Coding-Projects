f=open("file30.txt",'r')
#print(f.read())
a=f.read().split(' ')
s=set(a)
dict={}
for x in s:
	f=a.count(x)
	dict[f'{x}']=f
freq=max(dict.values())
for key, value in dict.items():
	if value==freq:
		print(key)