def isalpha(s):
	f=0
	for x in s:
		if (x>='A' and x<='Z') or ( x>='a' and x<='z'):
			f+=1
	if f==len(s):
		return True
	else:
		return False

def isdigit(s):
		f=0
		for x in s:
			if x>='1' and x<='9':
				f+=1
		if f==len(s):
			return True
		else:
			return False
			
def alluppercase(s):
		f=0
		for x in s:
			if x>='A' and x<='Z':
				f+=1
		if f==len(s):
			return True
		else:
			return False
			
			
def alllowercase(s):
			f=0
			for x in s:
				if x>='a' and x<='z':
					f+=1
			if f==len(s):
				return True
			else:
				return False
			
			
			
			
			
		
		
		
			
		