sentence = input("Kalimat : ").lower()
vowel_count = 0
consonant_count = 0

for letter in sentence:
    if letter in "aiueo":
        vowel_count += 1
    elif letter.isalpha():
        consonant_count += 1

print("Jumlah Vokal :", vowel_count)
print("Jumlah Konsonan :", consonant_count)
