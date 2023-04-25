dict={}
def freq(l):
	for x in l:
		if type(x)==type([]):
			freq(x)
		else:
			if x in dict.keys():
				dict[x]+=1	
			else:
				key=x
				value=1
				dict[key]=value
	return dict



l=eval(input("enter list:-"))
print(freq(l))
				
				