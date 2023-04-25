n=int(input("enter no of list:-"))
l=[]
for i in range(n):
	l.append(list(map(int,input("enter no in list:-").split(' '))))
print(max(l,key=sum))

#""""""""""""
#or
#l=eval(input("enter nested list:-"))
#print(max(l,key=sum))
#""""""""""""""