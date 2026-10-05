class BrowserHistory {

    // Node of doubly linked list
    class Node {
        String data;
        Node prev;
        Node next;

        Node(String data) {
            this.data = data;
            this.prev = null;
            this.next = null;
        }
    }

    Node current;

    // Constructor
    public BrowserHistory(String homepage) {
        current = new Node(homepage);
    }

    // Visit a new URL
    public void visit(String url) {

        Node newNode = new Node(url);

        // Connect current to new node
        current.next = newNode;
        newNode.prev = current;

        // Move current to new page
        current = newNode;
    }

    // Move backward
    public String back(int steps) {

        while (steps > 0 && current.prev != null) {
            current = current.prev;
            steps--;
        }

        return current.data;
    }

    // Move forward
    public String forward(int steps) {

        while (steps > 0 && current.next != null) {
            current = current.next;
            steps--;
        }

        return current.data;
    }
}