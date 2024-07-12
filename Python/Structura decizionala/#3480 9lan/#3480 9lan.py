with open("9lan.in", "r") as file:
    x = int(file.readline().strip())

with open("9lan.out", "w") as file:
    if x % 2 == 0:
        file.write(str(1)+'\n')
    else:
        file.write(str(9)+'\n')
    