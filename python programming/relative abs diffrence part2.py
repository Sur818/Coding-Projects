test_list=eval(input("enter test list;-"))
# printing original list
print("The original list is : " + str(test_list)
res=[text_list[idx] for idx in range(1,len(test_list)) if (abs(test_list[idx-1]-text_list[idx])>k)and(abs(test_list[idx+1]-text_list[idx]))>k]

print("The extracted difference elements : " + str(res))