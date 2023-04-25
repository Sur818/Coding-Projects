print("capitallize first latter of each word:--")
s=input("enter string:-").split(' ')
ans=list(map(lambda x: x[0].upper()+x[1::] ,s))
print(" ".join(ans))
	