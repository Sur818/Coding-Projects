n=int(input("enter no of list:-"))
l=[]
for i in range(n):
	l.append(list(map(int,input("enter no in list:-").split(' '))))
m_boundry=int(input("enter boundry no:-"))
l=[list(filter(lambda x : True if x>m_boundry else False,x)) for x in l]
print(l)