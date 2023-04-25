test_list=eval(input("enter test list:-"))
print("The original list is : " + str(test_list))  
res = not any(set(list(sub1)).intersection(set(list(sub2)))
              for idx, sub1 in enumerate(test_list) 
              for sub2 in test_list[idx + 1:])
print(res)
  
print("Are strings mutually disjoint? : " + str(res))
	