def freq(l):
	dict={}
	for x in l:
		nums=[x for sublist in l for x in sublist]
		for data in nums:
			if data in dict.keys():
				dict[data]+=1	
			else:
				key=data
				value=1
				dict[key]=value
		return dict



l=eval(input("enter list:-"))
print(freq(l))
				
				
		