x,y = map(int , input().split())


if y % 2 == 0: 
    print( (y + y//2 - 2) * 10 + x )
else:
    print((y + y//2 - 1) * 10 + x)