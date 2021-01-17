struct _ListNode {
	int val;
	_ListNode *pre;
	_ListNode *next;
	_ListNode(int value) : val(value) {
		pre = NULL;
		next = NULL;
	}
};

class MyCircularDeque {
public:
	int capacity;
	_ListNode *head;
	_ListNode *tail;
	int size;
	/** Initialize your data structure here. Set the size of the deque to be k. */
	MyCircularDeque(int k) {
		capacity = k;
		size = 0;
		head = NULL;
		tail = NULL;
	}

	/** Adds an item at the front of Deque. Return true if the operation is successful. */
	bool insertFront(int value) {
		if (isFull()) return false;
		_ListNode *newNode = new _ListNode(value);
		newNode->next = head;
		if (head != NULL) head->pre = newNode;
		head = newNode;
		if (++size == 1) tail = newNode;
		return true;
	}

	/** Adds an item at the rear of Deque. Return true if the operation is successful. */
	bool insertLast(int value) {
		if (isFull()) return false;
		_ListNode *newNode = new _ListNode(value);
		newNode->pre = tail;
		if (tail != NULL) tail->next = newNode;
		tail = newNode;
		if (++size == 1) head = newNode;
		return true;
	}

	/** Deletes an item from the front of Deque. Return true if the operation is successful. */
	bool deleteFront() {
		if (isEmpty()) return false;
		_ListNode *deleteNode = head;
		head = head->next;
		if (head != NULL) head->pre = NULL;
		delete deleteNode;
		if (--size == 0) tail = NULL;
		return true;
	}

	/** Deletes an item from the rear of Deque. Return true if the operation is successful. */
	bool deleteLast() {
		if (isEmpty()) return false;
		_ListNode *deleteNode = tail;
		tail = tail->pre;
		if (tail != NULL) tail->next = NULL;
		delete deleteNode;
		if (--size == 0) head = NULL;
		return true;
	}

	/** Get the front item from the deque. */
	int getFront() {
		return isEmpty() ? -1 : head->val;
	}

	/** Get the last item from the deque. */
	int getRear() {
		return isEmpty() ? -1 : tail->val;
	}

	/** Checks whether the circular deque is empty or not. */
	bool isEmpty() {
		return size == 0;
	}

	/** Checks whether the circular deque is full or not. */
	bool isFull() {
		return size == capacity;
	}
};