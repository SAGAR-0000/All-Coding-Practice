// Writing Files using Java Program

// Import the FileWriter class
import java.io.FileWriter;
import java.io.IOException; 

public class WriteFile 
{
    public static void main(String[] args)
    {
        // Writing Text File also
        // Exception Handling
        try {

            FileWriter Writer = new FileWriter("myfile.txt");

            // Writing File
            Writer.write("Files in Java are seriously good!!");
            Writer.close();
            
            System.out.println("Successfully written.");
        }

        // Exception Thrown
        catch (IOException e) {
            System.out.println("An error has occurred.");
            e.printStackTrace();
        }
    }
}
