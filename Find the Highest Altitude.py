class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        g = 0 
        if(g< gain[0]):
            g = gain[0]
        for i in range(1,len(gain)):
          gain[i]+=gain[i-1]
        #   print(gain[i])
          if( g < gain[i]):
            g = gain[i]
        return g 
    