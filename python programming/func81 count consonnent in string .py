def consonent(s):
	count=0
	list=['a','e','i','o','u']
	list2=[chr(x)for x in range(97,124)]
	for x in s:
		if x in list2 and x not in list:
			count+=1
	return count
s=input("enter string:-")
s.lower()
print("no of consonent in string=",consonent(s))