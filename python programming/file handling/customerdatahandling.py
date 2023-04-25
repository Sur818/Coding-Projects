import pickle
f=open("customer.dat",'rb')
while True:
		try:
			a=pickle.load(f)
			print(a)
		except EOFError:
			break