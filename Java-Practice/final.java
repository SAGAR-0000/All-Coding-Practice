class A {
    final void meth() {
        System.out.println("This is a final method.");
    }
}

class B extends A {
    // No meth() method here, so it will inherit from A
}

class final
{   
    public static void main(String[] args) {
        B b = new B();
        b.meth();  // This will call the meth() method inherited from class A
    }
}
