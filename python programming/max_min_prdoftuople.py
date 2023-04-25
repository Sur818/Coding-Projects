#prgm to find max and min product from the pair of tuples
import sys
def func(l):
	max_prod=-sys.maxsize-1
	min_prod=sys.maxsize
	for x in l:
		if x[0]*x[1]>max_prod:
			max_prod=x[0]*x[1]
		if x[0]*x[1]<min_prod:
			min_prod=x[0]*x[1]
	return (max_prod,min_prod)
		
			
	
		
l=eval(input("enter  data in tuples"))
print(func(l))








