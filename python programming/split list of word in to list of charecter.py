#split word in to charecter in list of strings
def spl(l):
	res=[i for element in l for i in element]
	return res

string=input("enter string:-").split(' ')
print(spl(string))