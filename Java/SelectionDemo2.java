import java.util.Scanner;

public class SelectionDemo2
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iStd = 0;

        System.out.println("Enter your standard : ");
        iStd = sObj.nextInt();

        if(iStd == 1)
        {
            System.out.println("Your Exam is at 9:00 AM");
        }
        else if(iStd == 2)
        {
            System.out.println("Your Exam is at 10:00 AM");
        }
        else if(iStd == 3)
        {
            System.out.println("Your Exam is at 11:00 AM");
        }
        else if(iStd == 4)
        {
            System.out.println("Your Exam is at 12:00 PM");
        }
        else
        {
            System.out.println("Enter Standard between 1 - 4");
        }
    }
}
