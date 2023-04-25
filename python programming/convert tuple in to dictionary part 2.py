#ex tuple(val1,key1),(val2,key2)
tuplex=(eval(input("enter pair tuple item:-")))
print(dict((y, x) for x, y in tuplex))
