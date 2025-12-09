abstract class Base
{   
    public int i,j;
    public int Addition(int A, int B)                       //Concrete
    {
        return A+B;
    }
    abstract public int Substraction(int A, int B);         //Abstract
}

class Derived extends Base                                  //ERROR (as no defination of a pure virtual function)
{
    
}

class AbstractDemo2
{
    public static void main(String Arr[])
    {
        Base bp2 = new Derived();                           //Upcasting
       
    }
}