a, b = map(int, input().split())

i = 1
x =[]

while i <= b:
    x.append(i)
    i *= a
print(" ".join(map(str, x)))