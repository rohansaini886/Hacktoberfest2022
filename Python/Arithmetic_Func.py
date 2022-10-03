# Arithmetic operation by using Functions
a = int(input("Enter First number."))
b = int(input("Enter Second number."))


# Functions for addition
def add(a, b):
    return a + b


# Function for subtraction
def subb(a, b):
    return a - b

# Function for multiplication
def mull(a, b):
    return a * b


# Function for division
def div(a, b):
    return a / b


# Function for powers
def power(a, b):
    return a ** b


# Function for finding remainders
def reminder(a, b):
    return a % b


# Function for Quotient
def quotient(a, b):
    return a // b


print("The addition of two numbers {} and {} is {}.".format(a, b, add(a, b)))
print("The subtraction of two numbers {} and {} is {}.".format(a, b, subb(a, b)))
print("The multiplication of two numbers {} and {} is {}.".format(a, b, mull(a, b)))
print("The Division of two numbers {} and {} is {}.".format(a, b, div(a, b)))
print("{} to the power {} is {}.".format(a, b, power(a, b)))
print("When we divide {} from {} , we get remainder {}.".format(a, b, reminder(a, b)))
print("{} divides {} at {}".format(b, a, quotient(a, b)))
