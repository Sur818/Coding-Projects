#to find consicutive element sum:----
l=eval(input("enter list of tuples:-"))
res=[]
for item in zip(*l):
	print(item,end=" ")
  res.append(sum(item))
print("sum of consicutive element:-",res)
	
