from itertools import combinations
class get_subset:
	def subset(self,l):
		return [list(combinations(l,i)) for i in range(len(l))]
obj=get_subset()
print(obj.subset([1,2,3]))


		
		