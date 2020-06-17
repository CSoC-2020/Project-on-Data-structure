public class Linked {

	public static void main(String[] args) {
		LinkedList linkedList=new LinkedList();
		linkedList.addAtHead(1);
		linkedList.addAtTail(3);
		linkedList.addAtIndex(1, 2); // linked list becomes 1->2->3
		System.out.println(linkedList.get(1)); // returns 2
		linkedList.deleteAtIndex(1); // now the linked list is 1->3
		System.out.println(linkedList.get(1)); // returns 3
	}

}
