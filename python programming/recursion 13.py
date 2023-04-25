def binary(bin,i,n):
	if n==0:
		return bin
	else:
		bin=bin+n%2*i
		return binary(bin,i*10,n//2)
n=int(input('enter no:-'))
print(binary(0,1,n))