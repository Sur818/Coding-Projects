n=int(input("enter no of term:-"))
l=[int(input(f"enter l[{x+1}]=")) for x in range(n)]
l_even=[]
l_odd=[]
for x in l:
	if x%2==0:
		l_even.append(x)
	if x%2!=0:
		l_odd.append(x)
print("even no in list:-")
print(l_even)
print("odd no in list:-")
print(l_odd)