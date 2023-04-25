l=eval(input("enter nested tuple"))
res=list(map(lambda x:tuple(map(lambda a:int(a),x)),l))
print(res)

