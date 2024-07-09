x = int(input())


if x%100 == 0:
    print(x)
else:
    print(x-x%100+100)