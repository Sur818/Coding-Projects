def merge(dict1,dict2):
	dict2.update(dict1)
	return dict2
	
dict1=eval(input("enter dictionary 1:-"))
dict2=eval(input("enter dictionary2:-"))
print(merge(dict1,dict2))