with open("file49.txt") as f1,open("file50.txt") as f2:
	a=f1.readlines()
	b=f2.readlines()
	if len(a)<len(b):
		a.append('')
	else:
		b.append('')
	l=[]
	for line_a,line_b in zip(a,b):
		s=""
		for word in (line_a).replace('\n','').split(' '):
			if word in (line_b).replace('\n','').split(' '):
				s=s+word+" "
		
		if s!="":
			l.append(s+'\n')
		else:
			l.append("<---no common word in this line---->+\n")



f=open("file49and50updated1.txt",'w+')
f.writelines(l)
f.seek(0)
print(f.read())
			
		
			
			
			