# This file gives a table of a number.

n = int(input("Enter the number of which you want a table"))
print("**** Table of {} ****".format(n))

for i in range(1,11):
  a = n*i
  print(" {} X {} = {} ".format(n,i,a))
  i=i+1
