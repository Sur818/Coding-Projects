l=eval(input("enter list of tuple:-"))
add_el=int(input("entet element want to add:-"))
res=list(map(lambda x:tuple(map(lambda a:a+add_el,x)),l))
print(res)