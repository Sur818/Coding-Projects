l=list(map(int,input('enter no:-').split(' ')))
step=int(input("enter step:-"))
l1=[]
for i in range(step):
	l1.append(l[i::step])
print(l1)
	