class subset:
		def func(self,l):
			return self.func_sub([],sorted(l))
		def func_sub(self,current ,s):
			if s:
				return self.func_sub(current,s[1:])+self.func_sub(current+[s[0]],s[1:])
			return[current]

	
obj=subset()
print(obj.func([1,2,3]))
	