k=1
def get_ele(x):
		global k
		for data in x:
			if type(data)==type([]):
				get_ele(data)
			else:
				try:
					k=x[n-1]
				except IndexError:
					print("list index is out of range please enter with in range:-")
					exit(0)
				
		return k
			

				
			


l=[[[[1,2,0]]],[[[2,5,0]]],[[[0,7,9]]],[[[9,1,6]]]]
n=int(input("enter sorting base:-"))
l=sorted(l,key=get_ele)
print(l)

