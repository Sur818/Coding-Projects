def remove_specificdigits(l,k):
	for i in range(len(l)):
		x=list(str(l[i]))
		index=0
		while(index<len(x)):
			try:
				if x[index]==str(k):
					x.remove(str(k))
					index-=1
				index+=1
			except:
				break
		x=''.join(x)
		l[i]=int(x)
	
	return l
		
	
		

l=eval(input("enter list:-"))
k=int(input("enter digit want to remove:-"))
ans=remove_specificdigits(l,k)
print(ans)
