def word_startsp(l,char):
	res=[]
	for s in l.split(' '):
		if s[0]==char:
			res.append(s)
	return ' '.join(res)


l=input("enter string:-")
c=str(input("enter charecter:-"))
print(word_startsp(l,c))