public class Stack<T>{
    private Node<T> head;


    public Node<T> getHead(){
        return this.head;
    }

    Stack(){
        this.head = null;
    }

    public boolean isEmpty(){
        return this.head == null;
    }

    public void push(T value){
        Node<T> newNode = new Node<>(value);
        if(this.isEmpty()){
            this.head = newNode;
        }else{
            newNode.next = this.head;
            this.head = newNode;
        }
    }
    public T pop(){
        if(this.isEmpty()){
            System.out.println("Stack is empty");
            return null; 
        }
        else{
            T temp = this.head.value;
            this.head = this.head.next;
            return temp;
        }
    }

    public T peek(){
        if(this.isEmpty()){
            return null;
        }else{
            return this.head.value;
            }
        }
    }

