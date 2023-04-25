def tuppling(lst):
    return eval('[' + str(lst).replace('[', '(').replace(']', ')') + ']')

L = [[[[1, 2, 3]], [4, 5]], 6]
print(tuppling(L))