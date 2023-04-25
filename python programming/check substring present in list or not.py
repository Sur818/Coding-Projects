def search_substring(l,sub):
	for x in l:
		if x.find(sub)!=-1:
			return True
	return False



l=eval(input("enter substring i list:-"))
sub=eval(input("enter substring want to check:-"))
print(search_substring(l,sub))