n = int(input("enter  n value:"))
dict = {}
for i in range(n):
    key,value=map(eval,input("enter key and valus:-").split(','))
    dict[key]=value
    #d[keys]=values
print(dict)


#dict=eval(input("enter dictionary:-"))

