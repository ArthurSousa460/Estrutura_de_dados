from Node import Node

class Stack:
    def __init__(self):
        self.last = None

    def is_empty(self):
        return self.last is None

    def push(self, value):
        node = Node(value)
        if self.last:
            temp = self.last
            self.last = node
            self.last.next = temp
        else:
            self.last = node
    
    def pop(self):
        if self.is_empty() == True:
            raise IndexError('Stack is empty')
        temp = self.last
        self.last = self.last.next
        return temp.value

    def peek(self):
        return self.last.value


        





