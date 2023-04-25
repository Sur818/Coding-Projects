f=open("file40.txt",'r')
a=f.read()
def has_palsubs(x):
	temp=0
	for i in range(len(x)):
		for j in range(i+1,len(x)+1):
			ans=x[i:j]
			if ans[::-1]==ans and len(ans)>temp:
				max_length=len(ans)
				temp=max_length
			
			
	return max_length
		



def check_word():
	temp=0
	f=open("file39.txt",'r')
	a=f.read()
	for x in a.split(' '):
		if has_palsubs(x)>temp:
			ans=x
			temp=has_palsubs(x)
	return ans,temp
print("word in which has maxlength substring accur:-")	
print(check_word())
		
		