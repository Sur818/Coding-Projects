n=int(input("enter no of list want to append in second list:-"))
l=[]
for i in range(n):
	temp=list(map(int,input(f'enter no in list[{i+1}]=').split(' ')))
	l.append(temp)
print("after appending:---")
print(l)