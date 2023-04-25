l=input("enter no:-").split(' ')
print(list(map(lambda x : (x.upper(),x.lower()) ,set(l))))

