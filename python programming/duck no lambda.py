n=input("enter no:-")
if int(n[0])!=0 and len(list(filter(lambda x: True if int(x)==0 else False ,n )))!=0:
		print("duck no:")
else:
	print("not duck no:-")
