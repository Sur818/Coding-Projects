from pickle import dump ,load
f=open('file53.dat','wb+')
l=[10,20,30,40,50,60]
dump(l,f)
f.seek(0)
a=load(f)
sum=0
for x in a:
	sum+=x
		
print("sum of seriese=",sum)