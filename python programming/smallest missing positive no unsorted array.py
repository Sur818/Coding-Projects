def findsmallestpositive(l,n):
		for i in range(n):
			if abs(l[i])-1<n and l[abs(l[i])-1]>0:
				l[abs(l[i])-1]=-l[abs(l[i])-1]
				
		for j in range(n):
			if l[j]>0:
				return j+1
		return n+1
				
				
def shift_nagativeelement(l,n):
	shift=0
	for i in range(len(l)):
		if l[i]<0:
			l[i],l[shift]=l[shift],l[i]
			shift+=1
	print(findsmallestpositive(l[shift::],n-shift))
	
			


l=list(map(int,input("enter no:-").split(' ')))
shift_nagativeelement(l,len(l))