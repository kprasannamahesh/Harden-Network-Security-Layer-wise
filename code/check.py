class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
class LinkedList:
    def __init__(self):
        self.head=None
    def insert_at_begin(self,ele):
        if self.head==None:
            self.head=Node(ele)
        else:
            new_node=Node(ele)
            temp=self.head
            self.head=new_node
            self.head.next=temp
    def insert_at_end(self,ele):
        if self.head==None:
            self.head=Node(ele)
        else:
            new_node=Node(ele)
            temp=self.head
            while(temp.next!=None):
                temp=temp.next
            temp.next=new_node
    def reverse(self):
        prev=None
        while self.head:
            temp=self.head
            self.head=self.head.next
            temp.next=prev
            prev=temp
        self.head=prev
    def display(self):
        temp=self.head
        while(temp!=None):
            print(temp.data,end=' ')
            temp=temp.next
ob1=LinkedList()
ob2=LinkedList()
for i in [1,2,3,4,5,100]:
    ob1.insert_at_end(i)
for i in [1,10,11,34,20]:
    ob2.insert_at_end(i)
ob1.display()
print()
ob2.display()
print()
def compare(ob1,ob2):
    len1=0
    len2=0
    check=0
    while(ob1!=None or ob2!=None):
        if(ob1.data==ob2.data):
            check+=1
        if(ob1!=None):
            len1+=1
        if(ob2!=None):
            len2+=1
        ob1=ob1.next
        ob2=ob2.next
    if check==len1 and len1==len2:
        return 1
    else:
        return 0
def merge(ob1,ob2):
    temp=Node(0)
    current=temp
    while(ob1!=None and ob2!=None):
        if(ob1.data<ob2.data):
            current.next=ob1
            ob1=ob1.next
        else:
            current.next=ob2
            ob2=ob2.next
        current=current.next
    if(ob1!=None):
        current.next=ob1
        #ob1=ob1.next
    else:
        current.next=ob2
        #ob2=ob2.next
    temp=temp.next
    while(temp!=None):
        print(temp.data,end=" ")
        temp=temp.next
def removeDuplicates(llist):
    # Write your code here
    ll=llist
    temp=Node(0)
    current=temp
    while ll!=None:
        if(ll.data!=ll.next.data):
            current.next=ll
        ll=ll.next
    return temp.next
print(removeDuplicates(ob1.head))
