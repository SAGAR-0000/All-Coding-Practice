class A{
    void show(int x,int y)
    {
        System.out.println("first value:"+(x+y));
    }
    void show(int x,int y,int z)
    {
        System.out.println("second value:"+(x+y+z));
    }
    void show(double x,double y)
    {
        System.out.println("third value:"+(x+y));
    }
    void show(double x,int y)
    {
        System.out.println("forth value:"+(x+y));
    }
}
public class overload{
    public static void main(String[] args) {
        A a = new A();
        a.show(1, 7);
        a.show(2, 1, 7);
        a.show(1.24935, 7.2352);
        a.show(1.243532, 8);
    }
}