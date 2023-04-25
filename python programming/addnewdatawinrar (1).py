data = []
while True:
    print("1.Add A Value.")
    print("2.Check A Value.")
    print("3.Summary of Data.")
    print("4.See All Data.")
    print("5.Exit.")
    c = input("Enter Your Choice: ")
    if(c=='1'):
        d = int(input('Enter Your Data: '))
        data.append(d)
    elif(c=='2'):
        k = int(input("Check the Entered Data: "))
        if k in data:
                print("Data is Present.")
        else:
                print("Data Is Not Present:")
    elif(c=='3'):
        print("Total data is : ",len(data))
        print("sum of all data : ",sum(data))
        print("average of data : ", sum(data)//len(data))
        print("maximum data : ", max(data))
        print("minimum data: ", min(data))
    elif(c=='4'):
        for x in data:
            print(x)
    elif(c=='5'):
       break