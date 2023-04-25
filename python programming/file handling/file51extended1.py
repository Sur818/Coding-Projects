f=open("file51.txt",'r+')
a=f.read()
c=0
for x in a.split(' '):
	c+=1
f.write(f"\nno of word={c}")
c=0
for x in a:
	if c!=' ':
		c+=1
f.write(f"\nno of charecter ={c}")
c=0
for x in a:
	if c==' ':
		c+=1
f.write(f"\nno of blank spaces={c}")
f1=0
f2=0
f3=0
f4=0
for x in a:
	if x>='A' and x<='Z':
		f1+=1
	elif x>='a' and x<='z':
		f2+=1
	elif x>='0'and x<='9':
		f3+=1
	else:
		f4+=1
f.write(f"\nno of chacrecter in uppercase={f1}")
f.write(f"\nno of charecter in lowercase={f2}")
f.write(f"\nno of digit={f3}")
f.write(f"\nno of specialcharector={f4}")
c=1
for x in a:
	if x=='\n':
		c+=1

f.write(f"\nno of lines in text={c}")
	
