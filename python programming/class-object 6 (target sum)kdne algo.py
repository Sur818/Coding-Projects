class Test:
	def targ_sum(self,l,target):
		dict={}
		for i,val in enumerate(l):
			if target-val in dict:
				return (dict[target-val],i)
			dict[val]=i
	
obj=Test()	
l=eval(input("enter list:-"))
target=int(eval(input("enter target:-")))
print("index1=%d,index1=%d" %obj.targ_sum(l,target))
			
			
		
		