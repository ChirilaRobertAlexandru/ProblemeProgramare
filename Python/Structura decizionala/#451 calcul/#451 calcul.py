x = int(input())

if x <= 15:
    print(x*x)
elif x <= 30:
    print(x%10+x//10)
else:
    print((x%10)*(x//10))