def sum(a,b):
	 dict1={}
	 dict2={}
	 dict1[f"[{a}+{b}]"]=a+b
	 dict2[f"[{a}-{b}"]=a-b
	 return dict1,dict2
	
	 



n=int(input("enter no: of term:-"))
l1=[int(input(f"l[{i+1}]=")) for i in range(n)]
print('\n')
l2=[int(input(f"l[{j+1}]=")) for j in range(n)]
print(list(map(sum,l1,l2)))
