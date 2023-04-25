list=[]
n=int(input("how many no want to inter:-"))
for i in range(n):
 data=int(input("enter no:-"))
 list.append(data)
 mg=0
sg=0
tg=0
for x in  list:
 if x>mg:
  mg=x
for x in list:
 if x>sg and x<mg:
  sg=x
for x in list:
 if x>tg and x<sg:
  tg=x
print('first max=',mg)
print('second max=',sg)
print('third max=',tg)