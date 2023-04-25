from itertools import groupby
def group_collection(l):
	def element(el):
		if len(el)>1:
			return tuple(el)
		
	return [element(list(group)) for key,group in groupby(l)]
		
	
l=eval(input("enter data:-"))
print("print group of duplicates:-")
ans=list(group_collection(l))
for x in ans:
	if x!=None:
		print(x)