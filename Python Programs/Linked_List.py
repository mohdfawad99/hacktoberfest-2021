## Implementation of Linked List Class with all fundamental operations.

class LinkedList:
 def __init__(self, value):
     self.head = {
         "Value": value,
         "Next": None
     }
     self.tail = self.head
     self.length = 1

 def append(self, value):
     new_node = {
         "Value": value,
         "Next": None
     }
     self.tail["Next"] = new_node
     self.tail = new_node
     self.length += 1
     return self

 def prepend(self, value):
     node = {
         "Value": value,
         "Next": self.head
     }
     self.head = node
     self.length += 1

 def print_list(self):
     arr = []
     current_node = self.head
     while current_node is not None:
         arr.append(current_node["Value"])
         current_node = current_node["Next"]
     print(arr)

 def insert(self, value, index):
     if index == 0:
         LinkedList.prepend(self, value)
     elif index > self.length:
         LinkedList.append(self, value)
     else:
         node = {
             "Value": value,
             "Next": None
         }
         temp = self.head
         for _ in range(index - 1):
             temp = temp["Next"]
         node["Next"] = temp["Next"]
         temp["Next"] = node
         self.length += 1
         del temp

 def remove(self, value):
     temp = self.head
     if temp["Value"] == value:
         self.head = temp["Next"]
     else:
         while temp["Next"]["Value"] != value:
             temp = temp["Next"]
         temp["Next"] = temp["Next"]["Next"]
     self.length -= 1
     del temp

 def reverse(self):
     prev_node = None
     current_node = self.head
     while current_node is not None:
         temp = current_node["Next"]
         current_node["Next"] = prev_node
         prev_node = current_node
         current_node = temp
     self.head = prev_node
     del temp


if __name__ == '__main__':
 my_linked_list = LinkedList(10)
 my_linked_list.append(20)
 my_linked_list.prepend(65)
 my_linked_list.insert(87, 2)
 my_linked_list.remove(87)
 my_linked_list.reverse()
 my_linked_list.print_list()
