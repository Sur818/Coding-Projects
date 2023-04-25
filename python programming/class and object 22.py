class Primefactor:
	def isprime(self,n):
		f=0
		for i in range(1,n+1):
			if n%i==0:
				f+=1
		if f<=2 and n!=1:
			return True
		else:
			return False
			
	def factor(self,n):
		for i in range(1,n+1):
			if n%i==0 and self.isprime(i):
				yield i
n=int(input("enter no:-"))
obj=Primefactor()
ans=list(obj.factor(n))
for x in ans:
	print(x)
			
	