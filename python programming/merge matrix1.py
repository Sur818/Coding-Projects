def merge_row(m1,m2):
	return list(map(lambda x,y:x+y,m1,m2))



m1=eval(input("enter matrix1:-"))
m2=eval(input("enter matrix2:-"))
print(merge_row(m1,m2))