l=eval(input("enter data:-"))
#sum=0
#for x in l:
#	sum=sum+round(x)
#print(sum*len(l))

ans=sum(list(map(round,l)))
print(ans*len(l))

