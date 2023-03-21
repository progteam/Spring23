import sys

def pigifier(sentence):
    pig, vowels = "", ['a', 'e', 'i', 'o', 'u', 'y']
    for word in sentence.split():
        if word[0].lower() not in vowels:
            v_index, found = 1, False
            for i in range(len(word)):
                if word[i].lower() in vowels and not found:
                    v_index, found = i, True
            pig += word[v_index:] + word[:v_index] + "ay" + " "
        else:
            pig += word + "yay" + " "
    return pig[:-1]

def main():
    for line in sys.stdin:
        print(pigifier(line.strip()))

if __name__ == '__main__':
    main()
