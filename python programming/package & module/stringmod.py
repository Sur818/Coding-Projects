def perc_reverse(s,per):
	per=int(len(s)*per/100)
	return s[per::-1]+s[per+1::]

s="suraj"	
print(perc_reverse(s,50))
	 