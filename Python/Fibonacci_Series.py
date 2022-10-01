userinput = int(input("Enter how many terms:\n"))

if(userinput < 1):
    print("Number not valid")
    exit()

# first two terms
n1, n2 = 0, 1
count = 0
res = []

if userinput == 1:
   res.append(n1)
# generate fibonacci sequence
else:
   while count < userinput:
       res.append(n1)
       nth = n1 + n2
       # update values
       n1 = n2
       n2 = nth
       count += 1
    #end
    
print("Fibonacci sequence:")
print(res)

