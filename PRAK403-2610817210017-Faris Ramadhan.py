a, b = map(int, input().split())


if a < b:
    step = 1
else:
    step = -1

for i in range(abs(a - b) + 1):
    if i > 0:
        print(" - ", end=" ")
    print(a + i * step, b - i * step, end=" ")
print()