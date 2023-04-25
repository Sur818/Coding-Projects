s=input("enter no:-").split(' ')
print(list(map(lambda a,b:int(a)*int(b),s,[x for x in range(1,len(s)+1)])))