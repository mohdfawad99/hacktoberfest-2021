from dataclasses import dataclass
from typing import Optional


# THESE ARE JUST HELPER CLASSES FOR NODE AND LINKED LIST, NOT IMPORTANT
@dataclass
class Node:
    data: int
    next: Optional['Node'] = None


class LinkedList:
    @staticmethod
    def construct(items: list[int]) -> Node:
        head = None
        ref = head
        for item in items:
            if head is None:
                head = ref = Node(item)
            else:
                ref.next = Node(item)
                ref = ref.next
        return head
    
    @staticmethod
    def traverse(head: Node) -> None:
        ref = head
        while ref:
            print(ref.data, end=' -> ')
            ref = ref.next
        print("NULL")


# ALGORITHM:
#  1. Split the list in 2 parts.
#  2. Repeat STEP 1 till list becomes singleton list.
#  3. SPLITTING COMPLETE, now time to MERGE.
#  4. Take a current variable answer, say 'Answer'.
#  5. Store Second Linked List's head if its smaller than the other
#     and vice versa and reassign the taken head to its next node afterwards.
#  6. Store Answer in another variable, say 'Reference' to return it afterwards.
#  7. Repeat STEP 5 but this time store the head in Answer.next.
#  8. Don't forget to reassign Answer to Answer -> next.
#  9. REPEAT STEP 7 to 8 until any of the lists get exhausted
# 10. At Last assign the Answer node's last pointer to any of the remaining linked list node ie:
#     Answer -> Last = (1st LinkedList's head) if 2nd LinkedList is exhausted else (2nd LinkedList's head)
# 11. Finally Return our 'Reference' pointer Node that we created in STEP 6

class MergeSort:
    @staticmethod
    def merge(first: Node, second: Node) -> Node:
        # Can't perform if any of the linked list is None
        if not first: return second
        if not second: return first
        
        if first.data > second.data:  # We keep the First head intact as its already in right place
            answer = second  # We take the Second head and Increment it to its next
            second = second.next
        else:  # And vice versa here as the second.data > first.data
            answer = first
            first = first.next
        
        ref = answer  # To store the answer
        while first and second:
            if first.data > second.data:  # Performing the same steps as before but this time on answer's next node
                answer.next = second
                second = second.next
            else:
                answer.next = first
                first = first.next
            answer = answer.next  # Assigning answer to its Updated next Node
        answer.next = first if not second else second  # Finally Assigning the last Node after coming out of loop
        return ref
    
    def sort(self, head: Optional[Node]) -> Optional[Node]:  # O(n*log(n) time complexity O(1) Space Complexity
        # BASE CASE: CAN'T perform on an Empty or SingleTon Linked List
        if not head or not head.next:
            return head
        
        # SPLITTING THE LINKED LIST INTO 2 PARTS
        first = head
        mid = self.mid(first)
        second = mid.next  # HEAD of 2nd Linked List
        mid.next = None  # ASSIGNING middle->next to NULL to mark end of 1st List
        left, right = self.sort(first), self.sort(second)  # RECURSIVELY SPLITTING INTO MORE PARTS
        return self.merge(left, right)  # RETURNING THE JOINED LINKED LIST
    
    @staticmethod
    def mid(head: Node) -> Node:  # O(N) time complexity
        slow = head  # Goes 1 step at a time
        fast = head.next  # Goes  2 steps at a time
        while fast and fast.next:  # so, Logically when fast reaches end, Mid will only reach till the midpoint
            fast = fast.next.next
            slow = slow.next
        return slow  # Returning the middle node


# TO TEST THE OUTPUTS
def test(items: list[int]) -> None:
    linked_list = LinkedList()
    head = linked_list.construct(items)
    linked_list.traverse(MergeSort().sort(head))


if __name__ == '__main__':
    test([1, 2, 3, 2, 1, 9])  # 1 -> 1 -> 2 -> 2 -> 3 -> 9 -> NULL
    test([9, 8, 7, 6])  # 6 -> 7 -> 8 -> 9 -> NULL
    test([])  # NULL
    test([0, 0, 0, 0])  # 0 -> 0 -> 0 -> 0 -> NULL
    test([1, 2, 4, 5, 9, 7, 6, 1, 1, 1, 1, 1, 1, 1, 2])  # 1 -> 1 -> 1 -> ...-> 2 -> 2 -> 4 -> 5 -> 6 -> 7 -> 9 -> NULL
    test([-1, -99, -10000, 0])  # -10000 -> -99 -> -1 -> 0 -> NULL
