s=input("enter string:-")
def func(a):
	global s1
	if a not in s1:
		s1+=a
		return True
s1=""
ans=list(filter(func,s))
print("after remove duplicasy")
ans="".join(ans)
print(ans)
	