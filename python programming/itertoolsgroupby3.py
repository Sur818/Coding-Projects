from itertools import groupby
def encoded_list(data_list):
	def element(el):
		if len(el)>1:
			return [len(el),el[0]]
		else:
			return el[0]
	return [element(list(group)) for key,group in groupby(data_list)]
			
			

data_list=eval(input("enter data:-"))
print(encoded_list(data_list))





