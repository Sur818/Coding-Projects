#prgm to find list of factors of a given no:---
s=input("enter no:-")
print("list of factors of given no:----")
print(list(filter(lambda x:True if int(s)%x==0 else False,[i for i in range(1,int(s))])))