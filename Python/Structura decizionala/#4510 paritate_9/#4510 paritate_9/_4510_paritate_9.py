x, y = map(int, input().split())

if x%2==y%2:
    print(x%10 + x//10 + y%10 + y//10)
else:
    print( (x%10) * (x//10) * (y%10) * (y//10) )