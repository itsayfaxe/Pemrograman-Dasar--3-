n = int(input("Masukkan banyak baris: "))
multiple = int(input("Masukkan kelipatan: "))

sum = 0  

for i in range(1, n + 1):
    line_total = 0
    for j in range(1, i + 1):
        line_total += j * multiple

    print(line_total)
    sum += line_total

print(sum)
