from itertools import groupby
test_list = [3, 3, 3, 3, 6, 7, 5, 5, 5, 8, 8, 6, 6, 6, 6, 6, 1, 1, 1, 2, 2]          
print("The original list is : " + str(test_list))
res = [sum(group) for k, group in groupby(test_list)]
 
print("Elements after equal Consecution product : " + str(res))