n = int(input())
k = int(input())

for _ in range(k):
    if n % 10 == 0:
        n //= 10
    else:
        n -= 1

print(n)
