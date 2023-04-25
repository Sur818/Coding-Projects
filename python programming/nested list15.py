l=eval(input("enter nested list:-"))
target=int(input("enter target value :-"))
print("longest list of list whoose sum is target")
res= max(l,key=lambda x:len(x) if sum(x)==target else -1)
if sum(res)!=target:
	print("Not found!")
else:
	print(res)





