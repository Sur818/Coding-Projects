test=input("enter string:-").split(' ')
rpl_dict=eval(input("enter dictionary:-"))
res=' '.join(rpl_dict.get(ele,ele) for ele in test)
print(res)














""""""""""""""""""""""""""""""""""""
for ele in test:
  print(rpl_dict.get(ele,ele))
   
""""""""""""""""""""""""""""""""""""
