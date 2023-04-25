def rev(list):
	l=[]
	for x in list:
		l.append(x[::-1])
	return l


string =input("enter sentence:-")
print("after reversing each word in sentence:-")
l=string.split()
ans=rev(l)
print(" ".join(ans))
