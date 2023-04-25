import itertools
def max_grouping(l):
	max_length=0
	for x,y in itertools.groupby(l):
		 length=len(list(y))
		 if length>max_length:
		 	max_length=length
	return max_length
		 
		 



l=eval(input("enter data in list:-"))
print("length of max grouping elements:-")
print(max_grouping(l))
		
		
