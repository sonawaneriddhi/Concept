abstract class Base
{   
    public int i,j;
    public int Addition(int A, int B)                       //Concrete
    {
        return A+B;
    }
    abstract public int Substraction(int A, int B);         //Abstract
}

class Derived extends Base
{
    public int x;
    public int Substraction(int A, int B)                   //Concrete
    {
        return A-B;
    }
    public int Multiplication(int A, int B)                 //Concrete
    {
        return A*B;
    }
}

class AbstractDemo3
{
    public static void main(String Arr[])
    {
        Base bp2 = new Derived();                           //Upcasting
        int iRet = 0;

        iRet = bp2.Addition(10, 11);
        System.out.println("Addition is : "+iRet);

        iRet = bp2.Substraction(11, 10);
        System.out.println("Substraction is : "+iRet);
        
        //iRet = bp2.Mulltiplication(10, 11);                  //Error
        
    }
}