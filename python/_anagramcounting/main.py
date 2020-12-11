import math
word = input()

length = len(word)
anagrams = 1

occurence = [0]*length



subBy = 0
for i in range(0, length):
    count = 0
    for j in range(0, length):
        if word[i] in word[j]:
            count += 1
    subBy += count

subBy -= length

        
print("Sub: ", subBy)
print("Ana: ", math.factorial(length))
anagrams = math.factorial(length - subBy)

print("Fin: ", anagrams)