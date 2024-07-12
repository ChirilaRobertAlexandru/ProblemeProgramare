n = int(input())

x = [0 for i in range(1,n+2)]
x[0] = 1
print("".join(map(str,x)))