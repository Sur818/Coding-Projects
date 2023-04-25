l=[]
def  mirror_no(n,k):
	global l
	x=0
	while k>0:
		if x%n==0 and x==int(str(x)[::-1]) and bin(x)[2::]==bin(x)[2::][::-1]:
			l.append(x)
			k-=1
		x+=1
	return l
	
n=int(input("enter no:-"))	
k=int(input("how many mirror multiple you want:-"))
print(mirror_no(n,k))
			
		
		
		
		
		
	
	
		





