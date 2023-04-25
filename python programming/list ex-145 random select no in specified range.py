from random import choice
def generate_random(start_range, end_range, nums):
    try:
    	result = choice([i for i in range(start_range,end_range) if i not in nums])
    except:
    	print("not possible")
    	exit(0)
    return result
   
start_range = int(input("enter start range:-"))
end_range = int(input("enter end range:-"))
nums =eval(input("enter list:-"))
print("\nGenerate a number in a specified rangeexcept present num is list ")
print(generate_random(start_range,end_range,nums))