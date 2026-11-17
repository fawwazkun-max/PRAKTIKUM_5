code_text = input()
message_text = input()

if len(code_text) != len(message_text):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    result = ""
    star_count = 0
    hash_count = 0

    for i in range(len(code_text)):
        if code_text[i] == message_text[i]:
            if code_text[i] == " ":
                result += " "
            else:
                result += "*"
                star_count += 1
        else:
            result += "#"
            hash_count += 1

    print(result)
    print("* =", star_count)
    print("# =", hash_count)

    if star_count >= hash_count:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
