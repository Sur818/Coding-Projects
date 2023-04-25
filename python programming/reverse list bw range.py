test_list=eval(input("enter list:-")) 
strt,end=map(int,input("enter starting and ending range:-").split(' '))
temp=test_list[strt:end]
temp.reverse()
for idx in range(strt,end):
    test_list[idx] = temp[idx - strt]
      
print("Range reversed range list : " + str(test_list))





#test_start[start:end]=test_start[start:end][::-1]