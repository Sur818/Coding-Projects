l=list(map(int,input("enter element in list:-").split(' ')))
l1=[]
print("remove consicutive duplicates:--")
i=0
while i<len(l)-1:
	if l[i]!=l[i+1]:
		l1.append(l[i])
		i+=1
	if i+1<len(l) and l[i]==l[i+1]:
		l1.append(l[i])
		while(i+1<len(l) and l[i]==l[i+1]):
			i+=1
		i+=1
	if i==len(l)-1 and l[i]!=l[i-1]:
		l1.append(l[i])
del(l)
print(l1)
	