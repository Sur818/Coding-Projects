l=list(tuple(map(int,input("enter pair:- ").split(' '))) for r in range(int(input('enter no of term:-'))))
l_new=[]
for x in l:
 for y in x:
 	if y not in l_new:
 		l_new.append(y)
print(l_new)
 