def substract_k(l,k):
	res=[]
	for x in l:
		s=""
		for y in str(x):
			if int(y)-k>=0:
				s+=str((int(y)-k))
		res.append(int(s))
	return res
		
l=eval(input("enter list of no's:-"))
k=int(input("enter digits:-"))
print(substract_k(l,k))			
				