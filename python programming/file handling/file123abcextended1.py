files=[]
for i in range(1,4):
	f=open(f"abc[{i}].txt",'r')
	files.append(f.read())
f=open("abcupdated.txt",'w')
for content in files:
	f.writelines(content+'\n')
	