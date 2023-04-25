import sys
def maxelement_range(l,n,index,dir):
	suf=[0]*(n+1)
	suf[n]=-sys.maxsize
	for i in range(len(l)-1,-1,-1):
		suf[i]=max(suf[i+1],l[i])
	if dir=="LEFT":
		return suf[index-1]
	else:
		return suf[index+1]
	
	
l=eval(input("enterlist:-"))
index=int(input("enter index:-"))
dir=input("enter dirction left or right:-").capitalize()
print(maxelement_range(l,len(l),index,dir))