class node{
public:
    int val;
    node* next;
    node(int x){
        val=x;
        next=NULL;
    }
};

class MyLinkedList {
    node *head=NULL;
    node *tail=NULL;
    int  sz;
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head=nullptr,tail=nullptr;sz=0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index<0||index>sz-1)
            return -1;
        int i=0; node*tp=head;
        while(i++<index)
            tp=tp->next;
        return tp->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        if(!head){
            head=new node(val);
            tail=head;
        }
        else{
            node*temp=new node(val);
            temp->next=head;
            head=temp;
        }
        sz++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if(!tail){
            head=new node(val);
            tail=head;
        }
        else{
            node*temp=new node(val);
            tail->next=temp;
            tail=temp;
        }
        sz++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index>sz||index<0)
            return;
        int i=0;
        node* tp=head;
        if(index==0){
            auto x=new node(val);
            x->next=head;
            head=x;
            if(!tail)
                tail=head;
            sz++;
            return;
        }
        while(i++<index-1)
            tp=tp->next;
        auto nn=tp->next;
        tp->next=new node(val);
        tp->next->next=nn;
        if(index==sz)
            tail=tp->next;
        sz++;
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index>=sz||index<0)
            return;
        int i=0;
        node* tp=head;
        if(index==0){
            auto p=head;
            head=head->next;
            if(sz==1)
                tail=head;
            sz--;
            delete(p);
            return;
        }
        while(i++<index-1)
            tp=tp->next;
        auto nn=tp->next;
        tp->next=nn->next;
        delete(nn);
        if(index==sz-1)
            tail=tp;
        sz--;
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