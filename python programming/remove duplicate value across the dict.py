#remove duplicate value across the dictionary
from collections import Counter
#test=eval(input("enter dictionary:-"))
test={'Manjeet':[1,4,5,6],
            'Akash':[1,8,9], 
            'Nikhil':[10,22,4], 
            'Akshat':[5,11,22]} 
#print(test.values())

cnt=Counter()
for idx in test.values():
	cnt.update(idx)
res={idx:[key for key in  val if cnt[key]==1] for idx,val in test.items()}
print(res)