#bst implementation

class Node:
 def __init__(self, value):
     self.data = value
     self.left = None
     self.right = None


class BST:
 def __init__(self):
     self.root = None

 def insert(self, value):
     new_node = Node(value)
     if self.root is None:
         self.root = new_node
     else:
         current_node = self.root
         while True:
             if value < current_node.data:
                 if current_node.left is None:
                     current_node.left = new_node
                     return self
                 current_node = current_node.left
             else:
                 if current_node.right is None:
                     current_node.right = new_node
                     return self
                 current_node = current_node.right

 def lookup(self, value):
     current_node = self.root
     while True:
         if current_node is None:
             print("does not exist")
             return 1
         if current_node.data == value:
             print(f"found {current_node.data}")
             return 0
         if current_node.data > value:
             print(current_node.data)
             current_node = current_node.left
         else:
             print(current_node.data)
             current_node = current_node.right

 def remove(self,value):
     current_node = self.root
     while True:
         if current_node is None:
             print("does not exist")
             return 1
         if current_node.data == value:

             return 0
         if current_node.data > value:
             current_node = current_node.left
         else:
             current_node = current_node.right


my_tree = BST()
my_tree.insert(83)
my_tree.insert(10)
my_tree.insert(66)
my_tree.insert(657)
my_tree.insert(28)
# print(my_tree.__dict__)
my_tree.lookup(83)
