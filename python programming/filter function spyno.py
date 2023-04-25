import functools
n=int(input("enter range:-"))
l=[x for x in range(1,n+1)]
def func(a):
	ans1=int(functools.reduce(lambda x,y: int(x)+int(y) , str(a)))
	ans2=int(functools.reduce(lambda x,y:int(x)*int(y),str(a)))
	if ans1==ans2:
		return True
ans=list(filter(func,l))
print("spy no are:-")
for x in ans:
		print(x)
		
		