class MyLinkedList {
    class Node{
    public:
        Node(int _val):val(_val){};
        int val;
        Node* next = nullptr;
    };
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        //cout << "index = " <<index <<", length = " << length <<endl;
        if (index > length - 1||index < 0 ) return -1;
        
        int i = 0;
        Node* it = head;
        while (i < index)
        {
            it = it->next;
            ++i;
        }
           
        
        return it->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node* it = new Node(val);
        if (head == nullptr)
        {
            
            head = it;
            tail = it;
        }
        else
        {
            it->next = head;
            head = it;
        }
        ++length;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node* it = new Node(val);
        if (tail == nullptr)
        {
            head = it;
            tail = it;
        }
        else
        {
            tail->next = it;
            tail = it;
        }
        ++length;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if (index <= 0)
        {
            addAtHead(val);
        }
        else if (index < length)
        {
            auto it = head;
            int i = 0;
            while (i < index - 1)
            {
                it = it->next;                
                ++i;
            }
            auto nx = it->next;
            it->next = new Node(val);
            it->next->next = nx;
            ++length;
        }
        else
        {
            if (index == length)
                addAtTail(val);
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (index > length - 1 || index < 0) return;
        
        int i = 0;
        Node* pre = nullptr;
        auto it = head;
        while (i < index)
        {
            pre = it;
            it = it->next;
            ++i;
        }
        
        if (pre == nullptr)
        {
            head = head->next;
            if (head == nullptr) tail = nullptr;
        }
        else
        {
            pre->next = it->next;
            if (pre->next == nullptr) tail = pre;
        }
        --length;
        
    }
        
private:
    Node* head = nullptr;
    Node* tail = nullptr;
    int length = 0;
        
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
