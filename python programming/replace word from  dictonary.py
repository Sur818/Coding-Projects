test=input("enter string:-").split(' ')
rpl_dict=eval(input("enter dictionary:-"))
for key,val in rpl_dict.items():
		if key in test:
			idx=test.index(key)
			test[idx]=val
print(' '.join(test))
		
		
		
		
		
		
	