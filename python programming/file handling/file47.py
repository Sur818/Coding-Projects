file1 = open("myfile.txt", "w") 
L = ["This is Delhi \n", "This is Paris \n", "This is London"] 
file1.writelines(L) 
file1.close()
file1 = open("myfile.txt", "a")   
file1.write("\n") 
file1.write("Today") 

file1.write("Tomorrow") 

file1 = open("myfile.txt", "r") 
print("Output of Readlines after appending") 

print(file1.read()) 

print() 
file1.close() 