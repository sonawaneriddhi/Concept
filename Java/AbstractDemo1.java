abstract class Base
{   
    public int i,j;
    public int Addition(int A, int B)                       //Concrete
    {
        return A+B;
    }
    abstract public int Substraction(int A, int B);         //Abstract
}

class AbstractDemo1
{
    public static void main(String Arr[])
    {
        Base bp = new Base();                               //Nocasting (Error for pure virtual class)
        
    }
}