#Python – Extract Key’s Value, if Key Present in List and Dictionary
test_list=eval(input("enter items in list for key checking in dictionary:-"))
test_dict=eval(input("enter dictionary:-"))
k=eval(input("enter key :-"))
for x in test_list:
	if x==k:
		print(test_dict[x])




