def sort_sumofrows(l):
	return sorted(l,key=sum)


l=eval(input("enter nested:-"))
print("sort the matrix on the bases of sum of its rows:-")
print(sort_sumofrows(l))