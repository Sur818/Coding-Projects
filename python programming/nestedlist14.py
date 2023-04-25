def func(l,min_range,max_range):
	return [i for i in l if min(i)>=min_range and max(i)<=max_range ]







l=eval(input("enter data:-"))
min_range=int(input("enter min range:-"))
max_range=int(input("enter max range:-"))
print("remove sublist outside the given range:----")
print(func(l,min_range,max_range))

