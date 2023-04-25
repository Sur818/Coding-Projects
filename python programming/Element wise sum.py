def element_wise_sum(tup):
	return tuple(map(sum,zip(*tup)))

tup=eval(input("enter homogenious tuple's of same lenth to get element wise sum:-"))
print(element_wise_sum(tup))