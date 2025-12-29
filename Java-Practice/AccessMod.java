package p1;

class A {  
    private int data = 40;  
    
    private void msg() {  
        System.out.println("Hello java");  
    }  
    
    // Public method to access private data
    public int getData() {  
        return data;  
    }  

    // Public method to access private msg
    public void showMessage() {  
        msg();  
    }  
}  

public class AccessMod {  
    public static void main(String args[]) {  
        A obj = new A();  
        System.out.println(obj.getData()); // Access private data via getter
        obj.showMessage(); // Call private method via public method
    }  
}
