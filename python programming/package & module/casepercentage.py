import word_case
def case_percantage(s):
	f1=0
	f2=0
	for x in s:
		if x>='A' and x<='Z':
			f1+=1
		elif x>='a' and x<='z':
			f2+=1
	if f1>f2:
		s=word_case.word_decapitallize(s)
	elif f1<f2:
		s=word_case.word_capitallize(s)
		 
	return s
	
#print(case_percantage("suRAJ"))