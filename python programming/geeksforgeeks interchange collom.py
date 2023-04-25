# Python3 code to swap the element of
# first and last column and display 
# the result
def interchangeFirstLast(mat, n, m): 

    rows = n 
#swaping the element between first and last collom:-------------->
    for i in range(n): 

            t = mat[i][0];

            mat[i][0] = mat[i][n-1];

            mat[i][n-1] = t;


#driver program:--------->
mat = [[8, 9, 7, 6], 

       [4, 7, 6, 5], 

       [3, 2, 1, 8], 

       [9, 9, 7, 7]] 

n = 4
m = 4
interchangeFirstLast(mat, n, m)
#print the interchange matrix:----->
for i in range(n): 

    for j in range(m): 

        print(mat[i][j], end = " ") 

    print("\n")