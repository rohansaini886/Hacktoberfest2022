def odd_or_even(number):
    if (number % 2 == 0):
        return 'even'
    else:
        return 'odd'

result = odd_or_even(int(input('Enter a number: ')))

print(f'The number you entered is {result}.')