def is_sublist(l,s):
	result=False
	if s==[] or s==l:
		result=True
	elif len(s)>len(l):
		result=False
	else:
		for i in range(len(l)):
			if l[i]==s[0]:
				n=1
			while(n<len(s))and(l[i+n]==s[n]):
				n+=1
			if n==len(s):
				result=True
			
	return result

l=list(map(int,input("enter no in list:-").split(' ')))
s=list(map(int,input("enter sublist:-").split(' ')))
print(is_sublist(l,s))