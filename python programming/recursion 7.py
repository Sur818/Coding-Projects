def func(i):
	if i>10:
		return 0
	else:
		print("hello")
		func(i+1)
i=0
func(0)