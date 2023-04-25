import random
def Closest(arr, n, target):
    i,j = -1,-1
    Sum = 0
    result = [i, j, abs(target-abs(Sum))]     
    for i in range(0, n):
        Sum = 0
        for j in range(i, n):
            Sum += arr[j]
            Dev = abs(target-abs(Sum))
            if (Dev < result[2]):
                result = [i, j, Dev]
            if (Dev == 0):
                return result
    return result

arr = [random.randint(1,100) for i in range(10)]
print('List :- ',arr)
n = len(arr)
target = int(input('Enter target :- '))
[i, j, minDev] = Closest(arr, n, target)
if(i ==-1):
    print(0)
data = [arr[x] for x in range(i,j+1)]
print(data)