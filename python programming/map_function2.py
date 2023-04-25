import math
def fact_list(a):
	a=int(math.factorial(a))
	return a

l=[1,2,3,4,5]
print(set(map(fact_list,l)))