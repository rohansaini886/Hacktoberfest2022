# Given two integers n and k, return an array of all the integers of length n where the difference between
# every two consecutive digits is k. You may return the answer in any order.

# Note that the integers should not have leading zeros. Integers as 02 and 043 are not allowed.
# Sample -
# Input: n = 3, k = 7
# Output: [181,292,707,818,929]
# Explanation: Note that 070 is not a valid number, because it has leading zeroes.

from collections import deque


def solve(N, K):
    if N == 1:
        return list(range(10))
    queue = deque(list(range(1, 10)))
    for n in range(N - 1):
        len_queue = len(queue)
        for j in range(len_queue):
            num = queue.popleft()
            lsd = num % 10
            if lsd - K >= 0:
                queue.append(num * 10 + lsd - K)
            if K and lsd + K <= 9:
                queue.append(num * 10 + lsd + K)
    return list(queue)


print(solve(int(input('Enter the length of the number: ')), int(
    input('Enter the difference betweern two consecutive digits: '))))
