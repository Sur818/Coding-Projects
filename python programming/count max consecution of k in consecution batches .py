from itertools import groupby
test_list=eval(input("enter list:-"))

K=4
N=10
res=[max(len(list(group)) for ele, group in groupby(sub) if ele == K)
          for sub in (test_list[idx : idx + N]
          for idx in range(0, len(test_list), N))]
          

"""""""""""""""""""""""""""""""""""""
def max_freofgel(test_list,K,N):
	for idx in range(0,len(test_list,N):
		for subgroup in (test_list[idx:idx+N]):
			temp=0
			for el group in groupby(subgroup):
				if element==K:
					temp=max(temp,max(len(group)))
			res.append(temp)
"""""""""""""""""""""""""""""""""""""
print(res)
 
