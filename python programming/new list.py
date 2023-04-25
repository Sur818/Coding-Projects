def dividing_two_lists(l1,l2):
    result = [x/y for x, y in zip(l1,l2)]
    return result 
nums1=eval(input("enter list1:-"))
nums2=eval(input("enter list2:-"))
print("Original list:")
print(nums1)
print(nums1)
print(dividing_two_lists(nums1, nums2))
