f=open("details.txt",'r')
count=0
for x in f.readlines():
	count+=1
print('no of lines=',count)