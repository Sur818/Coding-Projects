l=eval(input("enter nested:-"))
for x in l:
	if len(set(x))==len(x):
		unique_list.append(x)

print("total unique lists are:-")
for x in unique_list:
	print(x,end=" ")