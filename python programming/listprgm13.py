n=int(input("enter no of sublist:-"))
l=[]
for i in range(n):
	l.append(list(map(int,input(f"sub_list l[{i}]=").split(' '))))
print("after sorting list each list and repective fist element base:--")
l=sorted(l,key=lambda x:x[-1])
l=[sorted(x) for x in l]
print(l)


