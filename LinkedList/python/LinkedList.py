from Node import Node


class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def is_empty(self):
        return self.head is None
    
    def add_last(self, value):
        node = Node(value)
        if self.head:
            self.tail.next = node
            self.tail = node
        else:
            self.head = node
            self.tail = node

    def add_first(self, value):
        node = Node(value)
        if self.head:
            node.next = self.head
            self.head = node
        else:
            self.head = node
            self.tail = node

    def remove_first(self):
        if self.is_empty():
            temp = self.head
            self.head = self.head.next
            return temp
        else:
            raise IndexError("List is empty")
        
    def remove_last(self):
        temp = self.tail.value
        if self.is_empty():
            pointer = self.head
            while pointer.next != self.tail:
                pointer = pointer.next
            pointer.next = None
            self.tail = pointer
            return temp
        else:
            raise IndexError('Stack is empty')
