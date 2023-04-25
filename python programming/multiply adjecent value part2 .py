test_tuple=eval(input("enter tuple:-"))
res=tuple(i*j for i,j in zip(test_tuple,test_tuple[::-1]))
print(res)
