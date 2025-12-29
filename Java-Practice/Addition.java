import java.io.*;

class Addition {
    public static void main(String args[]) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str;
        int x, y, z;

        try {
            System.out.println("Enter 1st number:");
            str = br.readLine();
            x = Integer.parseInt(str);

            System.out.println("Enter 2nd number:");
            str = br.readLine();
            y = Integer.parseInt(str);

            z = x + y;
            System.out.println("Addition Result is: " + z); 
        } 
        catch (Exception e) {
            System.out.println("Invalid Number. Try Again!");
        }
    }
}

