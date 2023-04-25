def substract_k(test_list,k):
  res=[]
  for ele in test_list:
  	str_ele=str(ele)
  	res.append(int(''.join([str(max(0,int(eli)-k))for eli in str_ele])))
  return res
  
test_list=eval(input("enter list:-"))
k=int(input("enter k:"))
print("Elements after subtracting:-",
substract_k(test_list,k))