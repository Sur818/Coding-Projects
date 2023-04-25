import pickle
def create_file():
	f=open("binfile8_func.dat",'wb')
	pickle.dump(input("enter text:-"),f)
	
def read_file():
	f=open("binfile8_func.dat",'rb')
	a=pickle.load(f)
	print(a)

def isunique(a):
	c=0
	for x in a.split(' '):
		if len(x)==len(set(x)):
			c+=1
	return c

def ispalindromeword(a):
	c=0
	for x in a.split(' '):
		if x==x[::-1]:
			c+=1
	return c

def longest_uniqueword(a):
	temp=0
	ans=""
	for x in a.split(' '):
		if len(x)==len(set(x)):
			if len(x)>temp:
				ans=x
				temp=max(temp,len(x))
	return ans

def longest_palindromeword(a):
	temp=0
	ans=""
	for x in a.split(' '):
		if x==x[::-1]:
			if len(x)>temp:
				ans=x
				temp=max(temp,len(x))
	return ans
			
	
def modified_file():
    print("enter1 to count no of word:-")
    print("enter 2 to count no of lines:-")
    print("enter 3 to count no unique word")
    print("enter 4 to count no of palindrome word")
    print("enter 5 to count no of longest unique word:-")
    print("enter 6 to count longest palindrome word:-")
    print("enter 0 to exit:-")
    f=open("binfile8_func.dat",'rb')    
    a=pickle.load(f)
    while True:
    	op=int(input("enter choice:-"))
    	if op==1:
    		c=0
    		for x in a.split(' '):
    			c+=1
    		print("no of word=",c)
    	if op==2:
    		c=0
    		for line in a.split('\n'):
    			c+=1
    		print("no of line=",c)
    	if op==3:
    		print("no of unique word=",isunique(a))
    	if op==4:
    		print("no of  palindrome word= ",ispalindromeword(a))
    	if op==5:
    		print("longest palindrome=",longest_palindromeword(a))
    	if op==6:
    		print("longest unique word=",longest_uniqueword(a))
    	if op==0:
    		break

    			
create_file()
read_file()
modified_file()

    			
    	

    	
    	
    
