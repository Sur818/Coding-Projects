#remove keys which value is greater than k
dict={'Gfg':3,'is' : 7, 'best' : 10, 'for' : 6, 'geeks' : 'CS'}
k=int(input("enter k value:-"))
#dict=eval(input("enter dictionary:-"))
res={key:val for key,val in dict.items() if  not isinstance(val,int) or val<=k}
print(res)