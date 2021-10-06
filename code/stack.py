class Stack:
    def __init__(self):
        self.data=[0]*10
        self.size=0
        self.top=-1
    def push(self,val):
        if(self.top==len(self.data)-1):
            print("Over Flow")
        else:
            self.top+=1
            self.data[self.top]=val
    def pop(self):
        if self.top<0:
            print("Under Flow")
        else:
            self.data[self.top]=0
            self.top-=1
    def display(self):
        for i in self.data:
            print(i,end=" ")
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
class LinkedList:
    def __init__(self):
        self.head=None
    def add_node(self,ele):
        new_node=Node(ele)
        if self.head==None:
            self.head=Node(ele)
        else:

//ob=Stack()
arr=[12,13,3,4,5,67,890]
for i in arr:
    ob.push(i)
ob.display()
