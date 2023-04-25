from collections import OrderedDict
s=eval(input("enter string:-"))
k=int(input("enter kth posn for get kth non repeating charecter in string:--"))
d={}
for x in s:
	d[x]=d.get(x,0)+1
o_dict=OrderedDict(d)
res=[key for key,val in o_dict.items() if val==1]
print(str(res[k-1]))


