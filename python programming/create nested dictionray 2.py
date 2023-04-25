test_dict=eval(input("enter test dictionaty:-"))
test_list=eval(input("enter data in list same length as dictionary:-"))
res={} 
for key, ele in zip(test_list, test_dict.items()):
	print(dict[ele])
	res[key]=dict([ele])
print(res)