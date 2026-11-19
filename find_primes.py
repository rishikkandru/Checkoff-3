import sys

n = int(sys.argv[1])
primeCount = 0

for i in range(2, n+1):
    prime = True
    for j in range (2, i):
        if i%j == 0:
            prime = False
            break;
    if prime:
        primeCount += 1

print(f"There are {primeCount} prime numbers up to {n}")
        