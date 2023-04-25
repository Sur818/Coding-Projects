l=eval(input("enter nested list:-"))
print("original list=",l)
ans=l[0]
for x in l[1::]:
	ans[-1::]=x
print(ans)
	