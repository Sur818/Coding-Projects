l =eval(input("Enter nested list:-"))
print("The original list is : " + str(l))
k= int(input("enter posn:-"))
for i in range(k-1,len(l),k):
	l[i].reverse()
print(l)
