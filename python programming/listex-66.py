l=eval(input("enter list:-"))
print("original list=",l)
ans=[0]
for x in l:
	if sum(x)>sum(ans):
		ans=x
print("sublist whose sum is max=",ans)
		