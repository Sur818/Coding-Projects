class Table:
	def table(self,n):
		sum=0
		for i in range(1,n+1):
			print(n,'*',i,"=",n*i)
			sum+=n*i
		return sum
n=int(input("enter no:-"))
obj=Table()
print("\n sum=",obj.table(n))
		