public class LinkedList {
	node head;
	public void addAtHead(int data) {
		node n=new node();
		n.data=data;
		n.next=null;
		if(head==null) {
			head=n;
		}
		else {
			n.next=head.next;
			head=n;
		}
	}
	public void addAtTail(int data) {
		node n=new node();
		n.data=data;
		n.next=null;
		if(head==null) {
			head=n;
		}
		else {
			node temp=head;
			while(temp.next!=null) {
				temp=temp.next;
			}
			temp.next=n;
		}
	}
	public int get(int index) {
		node temp=head;
		while(index>0 && temp!=null) {
			temp=temp.next;
			index--;
		}
		if(temp==null)
			return -1;
		else
			return temp.data;
	}
	
	/*public void insert(int data) {
		node n=new node();
		n.data=data;
		n.next=null;
		if(head==null) {
			head=n;
		}
		else {
			node temp=head;
			while(temp.next!=null) {
				temp=temp.next;
			}
			temp.next=n;
		}
				
	}*/
	public void addAtIndex(int index, int data) {
		node n=new node();
		n.data=data;
		n.next=null;
		if(head==null || index==0) {
			addAtHead(data);
		}
		else {
			int flag=0;
			node temp=head;
			node r=head;
			while(index>0) {
				r=temp;
				temp=temp.next;
				flag--;
				index--;
			}
			n.next=r.next;
			r.next=n;
		}
	}
	public void deleteAtIndex(int index) {
		node temp=head;
		node back=head;
		if(index==0)
			head=head.next;
		while(index>0 && temp.next!=null) {
			back=temp;
			temp=temp.next;
			index--;
		}
		if(temp.next==null) {
			System.out.println("Data not found");
		}
		else {
			back.next=temp.next;
		}
	}
	public void show() {
		node temp=head;
		while(temp.next!=null) {
			System.out.print(temp.data + " ");
			temp=temp.next;
		}
		System.out.println(temp.data);
	}
	

}
