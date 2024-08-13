n = int(input())


for i in range(1, n):
    print((n-i)*" "+"*"+(i-1)*" "+("*" if i > 1 else ""))

x = []

for i in range(1, 2*n):
    if i % 2 != 0:
        x.append("*")
    else:
        x.append(" ")
print("".join(map(str, x)))

