def triplet_sumgreaterthank(l,tar):
	res=0
	for i in range(len(l)-2):
		for j in range(i+1,len(l)-1):
			for k in range(j+1,len(l)):
				if l[i]+l[j]+l[k]>tar:
		
					res+=1
	return res
	
	
l=eval(input("enter list:-"))
k=int(input("enter target value:-"))
ans=triplet_sumgreaterthank(l,k)
print(ans)
		