s=input("enter sentence:-").split(" ")
word=input("enter word want to reverse:-")
ans=list(map(lambda x: x[::-1] if x==word else x,s))
print(" ".join(ans))
		
	
		