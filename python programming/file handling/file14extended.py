f=open("file14.txt",'r+')
a=f.read()
print(a)
print("palindrome word present in txt file:- ")
print(list(filter(lambda x:True if x==x[::-1] else False,a.split(' '))))
	