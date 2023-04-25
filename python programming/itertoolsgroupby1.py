import itertools 
def func(l):
    for key,group in itertools.groupby(l):
    	print(((len(list(group)),key)),end=" ")
    


l=list(map(int,input().split(' ')))
func(l)