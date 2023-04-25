def sort_basedondigit(l):
	odd_=sorted([i for i in l if i%2!=0],key=lambda x:int(str(x)[0]))
	k=0
	for i in range(len(l)):
		if l[i]%2!=0:
			l[i]=odd_[k]
			k+=1
	return l
		
	
	
	
l=eval(input("enter inteager data:-"))
print("sort odd intaeger based on first digits:-")
print(sort_basedondigit(l))