def count_data(l,data):
	count=0
	for x in l:
		if data in x:
			count+=1
	return count


l=eval(input("enter nested list:-"))
data=eval(input("enter data:-"))
print("no of sublist contains perticuler data is:-",end=" ")
print(count_data(l,data))