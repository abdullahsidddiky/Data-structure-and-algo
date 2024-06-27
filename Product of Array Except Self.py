class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        left_prod=[0]*len(nums)
        right_prod=[0]*len(nums)
        right_mul=1
        left_mul=1
        # print(left_prod)
        for i in range(len(nums)):
            j = -i-1
            left_prod[i]=left_mul
            right_prod[j]= right_mul
            left_mul*=nums[i]
            right_mul*=nums[j]
            # print(nums[j])
            # print(j)
        return [l*r  for l, r in zip(left_prod, right_prod)]

# space complexity O(1)
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prod_arr = [0]*len(nums)
        mul = 1
        for i in range(len(nums)):
            prod_arr[i] = mul
            mul*=nums[i]
        print(prod_arr)
        mul = 1
        for i in range(len(nums)):
            j = -i-1
            prod_arr[j] *= mul 
            mul*= nums[j]
        return prod_arr

        

        
        