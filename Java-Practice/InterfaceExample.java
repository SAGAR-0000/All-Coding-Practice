interface Message {
    void message1();
    void message2();
}

class A implements Message {
    @Override
    public void message1() {
        System.out.println("Good Morning.");
    }

    @Override
    public void message2() {
        System.out.println("Good Evening.");
    }
}

public class InterfaceExample { // Renamed to avoid conflict
    public static void main(String[] args) {
        A a = new A();
        a.message1();
        a.message2();
    }
}

