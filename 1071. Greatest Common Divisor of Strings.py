import math
word1 = input('word?')
word2= input('word2?')
if(word1+word2 != word2+word1):
    print("")

print(word1[:math.gcd(len(word1), len(word2))])