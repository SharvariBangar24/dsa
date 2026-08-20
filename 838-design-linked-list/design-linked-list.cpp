class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        next = nullptr;
    }
};

class MyLinkedList 
{
public:
    Node* head;
    MyLinkedList()
    {
        head=nullptr;
    }


    
    int get(int index) 
    {
        Node* temp = head;
        for(int i = 0 ; i < index ; i++)
        {
            if(temp==nullptr)
            {
                return -1 ;
            }
            temp=temp->next;

            if(temp == nullptr)
            {
                 return -1;
            }
        }
        return temp->val;
    }
    
    void addAtHead(int val) 
    {
        Node* NewNode = new Node(val);
        NewNode->next = head;
        head=NewNode;
    }
    


    void addAtTail(int val) 
    {
        if(head==nullptr)
        {
            //empty ll 
            Node* NewNode = new Node(val);
            head= NewNode;
            return;
        }
        Node* temp = head;

        while(temp!=nullptr && temp->next != nullptr )
        {
            temp = temp->next;
        }
        Node* NewNode = new Node(val);
            temp->next = NewNode;
            temp=NewNode;
    }
    
    void addAtIndex(int index, int val) 
    {
       Node* temp = head;
       if(index == 0)
       {
        addAtHead(val) ;
        return;
       }

       for(int i = 0; i < index - 1; i++)
       {
        if(temp==nullptr)
        {
            return ;
        }
        temp=temp->next;
       }
        Node* NewNode = new Node(val);
        NewNode->next=temp->next;
        temp->next=NewNode;
    }
    
    void deleteAtIndex(int index) 
    {
        if(index==0)
        {
            head=head->next;
            return;
        }
        Node* temp = head;
         for(int i = 0; i < index -1 ; i++)
         {
            if(temp==nullptr)
        {
            return ;
        }
            temp=temp->next;
         }
         if(temp == nullptr || temp->next == nullptr)
    {
        return;
    }
         temp->next=temp->next->next;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */