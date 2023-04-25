def remove_number(l):
	i=0
	while i<len(l):
		x=str(l[i])
		if len(set(str(x)))!=len(str(x)):
			l.remove(l[i])
			i-=1
		i+=1
	return l

l=eval(input("enter no:-"))
print("after removing number in which duplicate digit are present:-")
print(remove_number(l))