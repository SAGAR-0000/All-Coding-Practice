class A
{
    @SuppressWarnings("unused")
    void Func()
    {
        System.out.println("Inheritance is not allowed");
    }

    @Override
    public String toString() {
        return "A []";
    }
}

class B extends A{
    void Func2(){
        System.out.println("Inherited A");
    }
}

@SuppressWarnings("unused")
class NoInheritance{
    public static void main(String[] args)
    {
        B sub = new B();
        sub.Func2();
    }
}