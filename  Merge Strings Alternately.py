word1 = input('word?')
word2= input('word2?')
i,j=0,0
res=[]
while(i<len(word1) and j<len(word2)):
   res.append(word1[j]) 
   res.append(word2[j])
   i+=1
   j+=1
res.append(word1[i:])
res.append(word2[j:])
print("".join(res))