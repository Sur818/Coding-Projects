from collections import Counter
test_list=eval(input("enter list of sentences:-"))
print("The original list is : " + str(test_list))
joined = " ".join(ele for ele in test_list)
mappd = Counter(joined.split()) 
total_val = sum(mappd.values())
print(total_val)
 
res = {key: val / total_val for key,
       val in mappd.items()}
print("Percentage share of each word : " + str(res))