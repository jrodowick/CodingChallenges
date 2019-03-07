def reverseString(sentence):
    words = sentence.split()
    words = words[::-1]
    sentence = ' '.join(words)
    print(sentence)


sentence = input('Enter a sentence to be reversed: ')
reverseString(sentence)
