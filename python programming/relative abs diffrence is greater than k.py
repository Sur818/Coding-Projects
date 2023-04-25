test_list = [2, 7, 4, 1, 9, 2, 3, 10, 1, 5]
print("The original list is : " + str(test_list))
K = 4  
res = []
for idx in range(1, len(test_list)):
    if abs(test_list[idx - 1] - test_list[idx]) > K\
            and abs(test_list[idx + 1] - test_list[idx]) > K:
        res.append(test_list[idx])

print("The extracted difference elements : " + str(res))