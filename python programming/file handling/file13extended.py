f=open("file13.txt",'r+')
a=f.read()
print(a)
count=0
for x in a.split(' '):
	count+=1
print('no of word=',count)
