s=input("enter sentence:-").split(" ")
substring=input("enter substring want to reverse:-")
ans=list(map(lambda x: x[::-1] if x in substring else x,s))
print(" ".join(ans))
		
	
		