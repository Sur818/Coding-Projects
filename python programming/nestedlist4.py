def sort_percantagelist(l):
	return sorted(l)



l=eval(input("enter data in list:-"))
per=int(input("how many percantage you have to sort:--"))
i=int((len(l)*per)/100)
ans=sort_percantagelist(l[0:i:])+l[i::]
print(ans)