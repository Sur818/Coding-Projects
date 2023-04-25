def harmonic_progression(sum,i,n):
	if i==n:
		return sum
	print(f'1/{i}',end='')
	if i<n-1:
		print('+',end='')
	return harmonic_progression(sum+1/i,i+1,n)
n=int(input("enter no of term:-"))
print("\n sum of harmonic seriese=",harmonic_progression(0,1,n+1))
	