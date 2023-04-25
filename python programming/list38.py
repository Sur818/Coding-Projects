def findNum(l,n):
    for i in range(1, n+1): 
        flag = False
        for j in range(n-1):  # iterating through the list
            if l[j] == i:
                flag = True
                break
        if flag == False:
            return i




l=list(map(int,input("enter no:-").split(' ')))
print(findNum(l,len(l)))
