n = int(input())

x = [i for i in range(1, 2*n+1,2)]
x.reverse()
print(" ".join(map(str,x)))