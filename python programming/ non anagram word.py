print("non anagram words are:----")
l=[x for x in input("enter words:-").split(" ")]
for i in range(len(l)):
	f=0
	for j in range(len(l)):
		if ("".join(sorted(l[i])))==("".join(sorted(l[j]))) and i!=j:
			f+=1
	if f==0:
		print(l[i])
		


