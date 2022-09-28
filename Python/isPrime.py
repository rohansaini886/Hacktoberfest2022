def isPrime(n, i = 2):

	if (n <= 2):
		return True if(n == 2) else False
	if (n % i == 0):
		return False
	if (i * i > n):
		return True

	return isPrime(n, i + 1)

n = int(input())
if (isPrime(n)):
	print("Yes")
else:
	print("No")
