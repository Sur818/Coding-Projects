from collections import OrderedDict
dict=eval(input("enter dictionary:-"))
od=OrderedDict(reversed(dict.items()))
print(od)
