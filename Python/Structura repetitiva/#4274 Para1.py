# Citirea datelor de intrare
n, c = input().split()
n = int(n)

# Afișarea părții ascendente
for i in range(1, n + 1):
    print(c * i)

# Afișarea părții descendente
for i in range(n, 0, -1):
    print(' ' * (n - i) + c * i)