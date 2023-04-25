from itertools import groupby
data=eval(input("enter data:-"))
l=[]
for key,group in groupby(data):
	l.append([len(list(group)),key])
print(l)

