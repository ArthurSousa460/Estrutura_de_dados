from node import Node

class Queue:
    def __init__(self, head = None, last =None):
        self.head = head
        self.last = last
        

    def is_empty(self):
        return self.head == None


    def enqueue(self, value):
        new_node = Node(value)
        if self.is_empty():
            self.head = new_node
            self.last = new_node
        else:
            self.last.next = new_node
            self.last = new_node


    def dequeue(self):
        if self.is_empty():
            raise IndexError('pop from empty queue')
        temp = self.head
        self.head = self.head.next
        return temp
