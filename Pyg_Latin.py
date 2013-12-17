original = raw_input('Enter a word:')

if len(original) > 0 and original.isalpha():
    if original[0] == "a" or original[0] == "e" or original[0] == "i" or original[0] == "o" or original[0] == "u" or original[0] == "A" or original[0] == "E" or original[0] == "I" or original[0] == "O" or original[0] == "U":
        pyg = 'ay'
        word = original.lower()    
        first = word[0]
        new_word = word + pyg
        
        print new_word
    else:
        word = original.lower()
        new_word = word[1:] + word[:1] + pyg
        
        print new_word

else:
    print 'empty'
