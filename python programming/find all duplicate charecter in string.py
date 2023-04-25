from collections import Counter
s=input("Enter string:-")
res=Counter(s)
for x in res:
	if res[x]>=2:
		print(x,end=" ")
	