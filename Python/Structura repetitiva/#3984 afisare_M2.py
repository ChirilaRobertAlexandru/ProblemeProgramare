x, y = map(int, input().split())

rez = [ x * i for i in range(1, y+1)]


print(" ".join(map(str, rez)))