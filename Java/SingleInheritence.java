class Base                      //8
{
    public int i,j;

    public void fun()
    {
        System.out.println("Inside Base Fun");
    }
}

class Derived extends Base      //12
{
    public int x;

    public void gun()
    {
        System.out.println("Inside Derived Gun");
    }
}

class SingleInheritence
{
    public static void main(String A[])
    {
        Base bObj = new Base();
        Derived dObj = new Derived();

        bObj.fun();
        dObj.fun();
        dObj.gun();

        bObj = null;
        dObj = null;

        System.gc();
    }
}