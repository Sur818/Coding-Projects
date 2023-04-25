def max_occurence(nums):
	max_value=0
	for x in nums:
		f=nums.count(x)
		if f>max_value:
			max_value=f
			res=x
	return res
		
		


nums=eval(input("enter data in list:-"))
print("element whooss accurence ia max in list:-")
print(max_occurence(nums))