f=open("file18.txt",'r')
a=f.readlines()
count=0
for x in a:
	count+=1
print('no of line in txt file=',count)