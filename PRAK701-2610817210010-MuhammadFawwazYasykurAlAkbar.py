first_name = input("Nama Depan : ")
last_name = input("Nama Belakang : ")

full_name = first_name + " " + last_name
letter_count = 0

for letter in full_name:
    if letter != " ":
        letter_count = letter_count + 1

print("Nama Lengkap :", full_name)
print("Panjang Nama (tanpa spasi) :", letter_count)
