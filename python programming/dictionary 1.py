dict={'a':1,'b':2}
dict['a']=dict.get('a',0)+5
print(dict)


#if pair is not present then add this pair and initiallize it by default 0
dict['c']=dict.get('c',0)+5
print(dict)