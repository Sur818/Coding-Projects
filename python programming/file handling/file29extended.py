f=open("file29.txt",'r')
a=f.read()
temp=0
def isunique(x):
	if len(set(x))==len(x):
		return True
	else:
		return False

for x in a.split(' '):
	if isunique(x) and len(x)>temp:
		ans=x
		temp=len(x)
print("longest unique word present in txt file:-",end=" ")
print(ans)
	
	