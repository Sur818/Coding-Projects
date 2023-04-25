def HF(n):
	for i in range(1,int(n/2)+1):
		if n%i==0:
			hf=i
	return hf

n=int(input("enter no:-"))
print("hf of given no:-",HF(n))


		