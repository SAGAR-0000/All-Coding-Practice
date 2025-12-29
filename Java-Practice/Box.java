
class Box {
    double width;
    double height;
    double depth;

    // Constructor with parameters
    Box(double w, double h, double d) {
        width = w;
        height = h;
        depth = d;
    }

    // Default constructor
    Box() {
        width = -1;
        height = -1;
        depth = -1;
    }

    // Constructor for a cube
    Box(double len) {
        width = height = depth = len;
    }

    // Method to calculate volume
    double volume() {
        return width * height * depth;
    }
}

class Overload {
    public static void main(String args[]) {
        Box mybox1 = new Box(10, 20, 15); // Box with specific dimensions
        Box mybox2 = new Box();          // Default box
        Box mycube = new Box(7);         // Cube with side length 7

        double vol;

        // Calculate and display volumes
        vol = mybox1.volume();
        System.out.println("Volume of mybox1 is " + vol);

        vol = mybox2.volume();
        System.out.println("Volume of mybox2 is " + vol);

        vol = mycube.volume();
        System.out.println("Volume of mycube is " + vol);
    }
}
