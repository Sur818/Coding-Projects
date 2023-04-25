#sort list of tuples  on the besis of freq of second element of tup--> 
from collections import Counter
def sort_fres(l):
	res=Counter([x for tup in l for x in tup])
	return sorted(l,key=lambda x:res[x[1]],reverse=True)
		
l=eval(input("enter list of tuple's:-"))

print(sort_fres(l))
		