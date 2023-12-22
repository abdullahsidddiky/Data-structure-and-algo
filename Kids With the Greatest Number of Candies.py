class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maxValue = max(candies)
        for i in range (len(candies)):
            if(candies[i]+extraCandies >=maxValue):
                candies[i]=True
            else:
                candies[i]=False
            i+=1
        return candies

