def count_same_pair(nums1, nums2, nums3):
    result = sum(m == n == o for m, n, o in zip(nums1, nums2, nums3))
    return result
nums1=eval(input("enter list:-"))
nums2 =eval(input("enter list:-"))
nums3 =eval(input("enter list:-"))
print("Original lists:")
print(nums1)
print(nums2)
print(nums3)
print("\nNumber of same pair of the said three given lists:")
print(count_same_pair(nums1, nums2, nums3))
