test_list = [475, 503, 425, 520, 470, 500]
test_list=eval(input("enter list:-"))
print("The original list is : " + str(test_list))
K=int(input("enter value of k:-"))
test_list.sort()
res=test_list[-1]-test_list[0]<K
print("Are elements in range ? : " + str(res))