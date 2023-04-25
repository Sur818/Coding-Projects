#freq of element in nested tuple:-
dict={}
def freq_(l):
	for x in l:
		if type(x)==type(()):
			freq_(x)
		else:
			#dict[x]=dict.get(x,0)+1
			if x in dict.keys():
				dict[x]+=1
			else:
				dict[x]=1
	return dict
	
l=eval(input("enter nested tuple::"))
print(freq_(l))
			
		