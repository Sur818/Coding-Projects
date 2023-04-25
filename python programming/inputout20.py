x=(1,2,"hello",(3,4,5),"suraj")
print(x)
b=x[3][2]
print(b)
y=[1,3,'suraj',("suraj ","singh"),5,6]
print(y)
print(tuple(y))
print(set(y))
dict={}
for i in range(len(y)):
 dict[f"k{i+1}"]=y[i]
print(dict)