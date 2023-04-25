def max_min(l):
	max_value=max(data for data in l if type(data)==type(2))
	min_value=min(data for data in l if type(data)==type(2))
	return (max_value,min_value)
	





l=eval(input('enter data:-'))
print(max_min(l))