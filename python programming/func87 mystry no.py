def reverse(n):
	n=str(n)
	return int(n[::-1])



def mystry_no(n):
	f=0
	for i in range(1,n+1):
		for j in range(1,n+1):
			if i+j==n and reverse(i)==j:
				f+=1
				return True
	if f==0:
			return False

n=int(input("enter no:-"))
if mystry_no(n):
	print("mstry no:-")
else:
	print("not mystry no:-")


			
				
				
				
		