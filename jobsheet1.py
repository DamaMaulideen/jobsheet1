from typing import Match


print ("tugas 1\n")
print ("tugas 1.elif\n")

print("Makanan apa yang anda suka?\n 1. Ayam Goreng\n 2. Bebek Goreng\n 3. Lele Goreng\n")

menu = int(input("Pilihan anda : "))

if (menu ==1):
    print("Ayam Goreng")
elif (menu ==2):
    print("Bebek Goreng")
elif (menu ==3):
    print("Lele Goreng")
else:
    print("Tidak suka semua")

print("=" * 50)

print ("tugas 1.dictionary\n")
print("Makanan apa yang anda suka?\n 1. Ayam Goreng\n 2. Bebek Goreng\n 3. Lele Goreng\n")

def menu(i):
    switcher={
        1: "Ayam Goreng",
        2: "Bebek Goreng",
        3: "Lele Goreng"
    }
    return switcher.get(i, "Tidak Suka Semua")

menu_favorit = menu(int(input("Pilihan anda : ")))
print(menu_favorit)

print("=" * 50)

print("tugas 2\n")
print("tugas 2.elif\n")

print("Berapakah Umur Anda Saat Ini?\n")
umur = int(input("Umur Saya : "))
#use boolean is not effective
status = bool()

if umur >= 18:
    print("Apakah Anda Sudah Terdaftar?\n1. Sudah\n2. Belum\n")
    status = int(input("Status Saya : "))
    if status == True:
        print("Anda Berhak Memilih\n")
    else:
        print("Anda Belum Terdaftar\n")
else:
    print("Anda Belum Berhak Memilih\n")

print("=" * 50)

# print("tugas 2.dictionary\n")

# print("Apakah Umur Anda Sudah 18 Tahun Keatas?\n1. Sudah\n2. Belum\n")
# umur = int(input("Umur Saya : "))
# def memilih(i):
#     switcher={
#         True: {print("Apakah Anda Sudah Terdaftar?\n1. Sudah\n2. Belum\n")
#     status = int(input("Status Saya : "))}
#     }
