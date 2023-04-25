l=input("enter strings:-").split(' ')
count=0
for x in l:
	if len(x)>2 and x[0]==x[-1]:
		count+=1
print("no of string which length>2 and first and last charecter are same:-",count)