#to find freq of element in nested tuple
def flatten(data):
	for tup in data:
		if isinstance(tup,tuple):
			yield from flatten(tup)
		else:
			yield tup
			
						
data=eval(input("enter nested tuple:-"))
dict={}			
for x in flatten(data):
	if x not in dict:
		dict[x]=1
	else:
		dict[x]+=1
print(dict)
