def func(a):
	if a>25:
		return True
		
n=int(input("enter no of term:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
print(list(filter(func ,l)))

#always generate a generator so u can typecast it to see the value
#if condition is not true the func not return anything but in map func if  condition false  then it return non