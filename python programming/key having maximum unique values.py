#dict={"Gfg":[5,7,9,4,0],"is":[6,7,4,3,3],"best":[9,9,6,5,5]}
dict=eval(input("enter list of dictionaryies:--"))
print("keys have max unique values are:----->")
ans=max(dict,key=lambda x:len(set(dict[x])))
print(ans)
