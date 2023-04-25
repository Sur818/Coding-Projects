l1=input("enter colours:-").split(' ')
l2=input("enter colour codes:-").split(' ')
l=[]
for x,y in zip(l1,l2):
	d={}
	d['colour_name']=x
	d['colour_code']=y
	l.append(d)
print(l)
	
