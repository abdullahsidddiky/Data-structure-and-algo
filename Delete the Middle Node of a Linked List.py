# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None
        curr = head 
        count = 0
        if head is None:
            return head
        while curr:
            curr = curr.next
            count+=1
        if count<=1:
            head = prev
            return head
        count = int( count/2)
        curr = head
        for i in range(count):
           prev = curr
           curr = curr.next
        prev.next = curr.next

        return head 
        