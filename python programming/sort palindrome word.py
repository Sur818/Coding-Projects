def ispalindrome(x):
	if x==x[::-1]:
		return True
	return False


def sort_palindromeword(l):
	new_list=[]
	for x in l:
		if ispalindrome(x):
			new_list.append(x)
	new_list.sort()
	j=0
	for i in range(len(l)):
		if ispalindrome(l[i]):
			l[i]=new_list[j]
			j+=1
	return ' '.join(l)

l=input("enter string:-").split(' ')
print(sort_palindromeword(l))
	
			
			
	
	
	