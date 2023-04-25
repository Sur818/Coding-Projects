import itertools
l=eval(input("enter data:-"))
list_ans=[]
for i in range(len(l)+1):
	list_ans.append(list(itertools.combinations(l,i)))
print("all possible combinations :-")
for x in list_ans:
	print(x)
	