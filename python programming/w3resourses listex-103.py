from itertools import groupby
l=eval(input("enter element in list:-"))
freq=int(input("enter no:-"))
print("asctracting the specify no of elements:-")
res=[key for key,group in groupby(l) if len(list(group))==freq]
print(res)
	
	
	
	
	

""""""""""""""""""""""""""""""""
l1=[]
for key,group in groupby(l):
	if len(list(group))==freq:
		l1.append(key)
print(l1)
""""""""""""""""""""""""""""""""