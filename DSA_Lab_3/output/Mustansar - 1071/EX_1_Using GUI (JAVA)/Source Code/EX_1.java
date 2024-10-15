import javax.swing.JOptionPane;
class Stack {
    private int ptr;
    private int arraySize;
    private int[] arr;

    public Stack(int size) {
        this.arraySize = size;
        this.arr = new int[arraySize];
        this.ptr = -1;
    }
    public void push(int x) {
        if (isFull()) {
            JOptionPane.showMessageDialog(null, "Stack Overflow", "Stack", JOptionPane.ERROR_MESSAGE);
            return;
        }
        this.ptr++;
        arr[ptr] = x;
        JOptionPane.showMessageDialog(null, "Element pushed successfully", "Stack", JOptionPane.INFORMATION_MESSAGE);
    }
    public void pop() {
        if (isEmpty()) {
            JOptionPane.showMessageDialog(null, "Stack is Empty so cannot pop", "Stack", JOptionPane.ERROR_MESSAGE);
            return;
        }
        this.ptr--;
        JOptionPane.showMessageDialog(null, "Element Popped successfully", "Stack", JOptionPane.INFORMATION_MESSAGE);
    }
    public void top() {
        if (isEmpty()) {
            JOptionPane.showMessageDialog(null, "Stack is Empty so no element is at Top", "Stack", JOptionPane.ERROR_MESSAGE);
            return;
        }
        JOptionPane.showMessageDialog(null, "Top element is " + this.arr[ptr], "Stack", JOptionPane.INFORMATION_MESSAGE);
    }
    public boolean isEmpty() {
        return (this.ptr == -1);
    }
    public boolean isFull() {
        return (this.ptr == this.arraySize-1);
    }
    public void currentStatus() {
        String status = "Total space in stack = " + this.arraySize
                + "\nUsed space in stack = " + (this.ptr+1)
                + "\nAvailable space in stack = " + (this.arraySize - (this.ptr+1));
        JOptionPane.showMessageDialog(null, status, "Stack", JOptionPane.INFORMATION_MESSAGE);
    }
}
public class EX_1 {
    public static void main(String[] args) {
        String choiceStr, elementStr;
        int choice, element;
        Stack st = new Stack(25);
        while (true){
            choiceStr = JOptionPane.showInputDialog(menu());
            if (choiceStr == null) {
                JOptionPane.showMessageDialog(null, "Exiting the programme", "Stack", JOptionPane.INFORMATION_MESSAGE);
                System.exit(0);
            }
            choice = 0;
            try {
                choice = Integer.parseInt(choiceStr);
            } catch (NumberFormatException e) {
                JOptionPane.showMessageDialog(null, "Invalid Input: Please enter a valid integer choice", "Stack", JOptionPane.ERROR_MESSAGE);
            }


            if (choice == 9) {
                JOptionPane.showMessageDialog(null, "Exiting the programme", "Stack", JOptionPane.INFORMATION_MESSAGE);
                break;
            }

            if (!(choice >= 1 && choice <= 6)) {
                JOptionPane.showMessageDialog(null, "Invalid Choice", "Stack", JOptionPane.ERROR_MESSAGE);
            }

            switch (choice) {
                case 1:
                    elementStr = JOptionPane.showInputDialog("Enter the number: ");
                    element = Integer.parseInt(elementStr);
                    st.push(element);
                    break;
                case 2:
                    st.pop();
                    break;
                case 3:
                    st.top();
                    break;
                case 4:
                    if (st.isEmpty()) {
                        JOptionPane.showMessageDialog(null, "Stack is Empty", "Stack", JOptionPane.INFORMATION_MESSAGE);
                    } else {
                        JOptionPane.showMessageDialog(null, "Stack is not Empty", "Stack", JOptionPane.INFORMATION_MESSAGE);
                    }
                    break;
                case 5:
                    if (st.isFull()) {
                        JOptionPane.showMessageDialog(null, "Stack is Full", "Stack", JOptionPane.INFORMATION_MESSAGE);
                    }
                    else {
                        JOptionPane.showMessageDialog(null, "Stack is not Full", "Stack", JOptionPane.INFORMATION_MESSAGE);
                    }
                    break;
                case 6:
                    st.currentStatus();
                    break;
            }
        }
    }
    public static String menu() {
        return ("""
                Press 1 to Push Element in Stack
                Press 2 to Pop the Element from Stack
                Press 3 to Check the Top Element in the Stack
                Press 4 to Check whether Stack is Empty
                Press 5 to Check whether Stack is Full
                Press 6 to check current status of Stack
                Press 9 to Quit the programme""");
    }
}