def triplet_sumlessthank(l,tar):
	for i in range(len(l)-2):
		for j in range(i+1,len(l)-1):
			for k in range(j+1,len(l)):
				if l[i]+l[j]+l[k]<tar:
					print(l[i],l[j],l[k])
	return 0
	
	
l=eval(input("enter list:-"))
k=int(input("enter target value:-"))
triplet_sumlessthank(l,k)
		