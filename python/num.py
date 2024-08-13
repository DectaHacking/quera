num = int(input())
numhelp = []
while num > 0 :
    numhelp.append(num // 10)
    num //= 10
    print(num)

print(numhelp)