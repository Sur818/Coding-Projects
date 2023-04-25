FirstNumber = int(input())
SYMBOL = str(input())
SecondNumber = int(input())
a = "Answer:" 

if SYMBOL == "+":
    print (FirstNumber + SecondNumber)

if SYMBOL == "-":
    print (int(a) + (FirstNumber - SecondNumber))
    
if SYMBOL == "/":
    print (FirstNumber / SecondNumber)
    
if SYMBOL == "*":
    print (FirstNumber * SecondNumber)

if SYMBOL == "**":
    print (FirstNumber ** SecondNumber)

if (SYMBOL != "*" and SYMBOL != "-") and (SYMBOL != "+" and SYMBOL != "/") and (SYMBOL != "**"):
    print("Whoops, looks like you entered in your caculation wrong. Try Re Entering it")