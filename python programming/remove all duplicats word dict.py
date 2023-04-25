from collections import Counter
s=input("string:-").split(' ')
dict=Counter(s)
res=' '.join(dict.keys())
print(res)
