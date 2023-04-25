from itertools import combinations
l1=[]
def is_sublist(l,s):
	for i in range(len(l)+1):
		l1.append(list(combinations(l,i)))
	for x in l1:
		for y in x:
			if tuple(y)==tuple(s):
				return True
	return False


l=list(map(int,input("enter list:-").split(' ')))
sub_list=list(map(int,input("enter sublist to check:-").split(' ')))
if is_sublist(l,sub_list):
	print('sublist:-')
else:
	print('not sublist:-')