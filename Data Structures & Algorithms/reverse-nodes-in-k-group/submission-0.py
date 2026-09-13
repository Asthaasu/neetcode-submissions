# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        group = dummy

        while True:
            kth = self.getK(group,k)
            if not kth:
                break
            groupNext = kth.next

            # reverse group
            prev,cur = kth.next , group.next
            while cur != groupNext:
                tmp = cur.next
                cur.next = prev
                prev = cur
                cur = tmp
            
            tmp = group.next
            group.next = kth
            group = tmp
        return dummy.next

    def getK(self,cur,k):
        while cur and k>0:
            cur = cur.next
            k -= 1
        return cur