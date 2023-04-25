def func(s):
	s.sort()
	return "-".join(s)

item=[s for s in input("enter hyphen spatated word:-") .split('-')]
print("after sorting:-")
print(func(item))