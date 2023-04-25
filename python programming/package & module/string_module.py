def replace_all(string,word,newword):
	string=string.split(" ")
	for i in range(len(string)):
		if string[i]==word:
			string[i]=newword
	string=" ".join(string)
	return string
	
def replace(string,index,word):
	string=string.split(" ")
	string[index]=word
	s=" ".join(string)
	return s
	
def replace_range(string,stposn,endposn,word):
	st=string.split()
	l=[]
	for x in range(len(st)):
		if x>=stposn and x<=endposn:
			continue
		l.append(st[x])
	l.insert(stposn,word)
	s=" ".join(l)
	return s
	
	
def replace_count(string ,word,newword,count=1):
	f=0
	string=string.split()
	for i in range(len(string)):
		if string[i]==word and f<count:
			f+=1
			string[i]=newword
		s=" ".join(string)
	return s
	
	

	
	
	
		
	
	


	  
			
