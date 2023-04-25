def count_percentagefreq(l):
	joined=" ".join(ele for ele in l)
	dict={}
	for x in joined.split(' '):
		f=joined.count(x)
		dict[x]=f
	sum_=sum(dict.values())
	dict={key:dict[key]/sum_ for key in dict}
	return dict


l=eval(input("enter list:-"))
#l = ["Gfg is best for geeks",
             "All love Gfg", 
             "Gfg is best for CS",
             "For CS geeks Gfg is best"]
               
print(count_percentagefreq(l))