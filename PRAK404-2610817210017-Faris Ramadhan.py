while True:

    print("--- Pilih  Program ---")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    option = int(input("Masukkan Pilihan: "))

    if option == 5:
        print("Terima kasih telah menggunakan kalkulator Faris Ramadhan")
        break
    elif option > 5:
        print("Input anda salah, silahkan coba lagi")
        print()
        continue

    input1 = float(input("Masukkan nilai pertama: "))
    input2 = float(input("Masukkan nilai kedua: "))

    operation_name = ""
    result = None

    if option == 1:
        operation_name = "Penjumlahan"
        result = input1 + input2
    elif option == 2:
        operation_name = "Pengurangan"
        result = input1 - input2
    elif option == 3:
        operation_name = "Perkalian"
        result = input1 * input2
    elif option == 4:
        if input2 == 0:
            print("Tidak terdefinisi")
        else:
            operation_name = "Pembagian"
            result = input1 / input2

    if result is not None:
        print(f"Hasil {operation_name} antara {input1:.2f} dengan {input2:.2f} adalah {result:.2f}")
    print()