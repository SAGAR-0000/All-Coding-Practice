import java.util.Scanner;

public class EmployeeDetails {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] names = new String[5];
        String[] departments = new String[5];
        int[] ages = new int[5];
        double[] salaries = new double[5];

       
        for (int i = 0; i < 5; i++) {
            System.out.println("Enter details for Employee " + (i + 1) + ":");
            System.out.print("Name: ");
            names[i] = scanner.nextLine();
            System.out.print("Department: ");
            departments[i] = scanner.nextLine();
            System.out.print("Age: ");
            ages[i] = scanner.nextInt();
            System.out.print("Salary: ");
            salaries[i] = scanner.nextDouble();
            scanner.nextLine(); 
        }

        System.out.println("\nEmployee Details:");
        for (int i = 0; i < 5; i++) {
            System.out.println("Employee " + (i + 1) + ": " + names[i] + ", " + departments[i] + ", Age: " + ages[i] + ", Salary: " + salaries[i]);
        }

        scanner.close();
    }
}
