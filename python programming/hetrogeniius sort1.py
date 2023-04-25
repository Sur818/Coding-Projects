def sort_hetrogenious(l):
	int_part=sorted(i for i in l if type(i)==int)
	str_part=sorted(i for i in l if type(i)==str)
	return int_part+str_part
	
	
	
l=eval(input("enter data:-"))
print("sort inteager and saprately:-")
print(sort_hetrogenious(l))
	
	