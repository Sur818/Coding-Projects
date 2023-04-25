def extract_symmetrictuple(l):
	res=[]
	for x in set(l):
		if x[::-1] not in res:
			if x[::-1]  in l:
				res.append(x)
	return res

l=eval(input("enter list of tuple:-"))
print(extract_symmetrictuple(l))	
	



#prgm2---->
ans={(1,2),(2,1),(2,3)}&{(2,1),(1,2),(3,2)}
print(ans)	

ans=set(l)&[x[::-1] for x in l]
print(ans)
		