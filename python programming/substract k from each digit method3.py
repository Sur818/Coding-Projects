test_list=eval(input("enter list:-"))
k=int(input("enter k:"))
res = [int(''.join([ str(max(0, int(el) - k)) for el in str(ele)]))
       for ele in test_list]
       
print(res)
  