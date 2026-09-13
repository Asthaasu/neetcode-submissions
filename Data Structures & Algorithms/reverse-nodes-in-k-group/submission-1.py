# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        groupPrev = dummy = ListNode(0, head)
        while True:
            # walk k steps to find the group's last node; if we fall off, we're done
            kth = groupPrev
            for _ in range(k):
                kth = kth.next
                if not kth:
                    return dummy.next
            groupNext = kth.next          # first node of the *next* group (exclusive boundary)

            # reverse [groupPrev.next .. kth]
            prev, curr = groupNext, groupPrev.next
            while curr != groupNext:
                nxt = curr.next
                curr.next = prev
                prev = curr
                curr = nxt

            # reconnect
            newTail = groupPrev.next       # old head is now the tail
            groupPrev.next = kth           # kth is the new head of this group
            groupPrev = newTail            # tail becomes prev for the next group