class Volume {
    double width;
    double depth;
    double height;

    void volume() {
        System.out.println("Volume is " + (width * height * depth));
    }
}

public class Main {
    public static void main(String[] args) {
        Volume mybox1 = new Volume();
        Volume mybox2 = new Volume();

     
        mybox1.width = 10;
        mybox1.depth = 20; 
        mybox1.height = 15;


        mybox2.width = 3;
        mybox2.height = 6;
        mybox2.depth = 9;


        mybox1.volume();
        mybox2.volume();
    }
}
