from collections import Counter
s=eval(input("enter string:-"))
k=int(input("enter kth no repearing charecter:-"))
dict=Counter(s)
res=[key for key,val in dict.items() if val==1]
print(f"{k}th non repeating charecter:-",res[k-1])

