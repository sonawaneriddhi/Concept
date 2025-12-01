class Arithematic
{
    public int iNo1;
    public int iNo2;

    public Arithematic()
    {
        System.out.println("Inside Default Contructor");
    }

    public Arithematic(int A, int B)
    {
        System.out.println("Inside Paramtertised Constructor");
    }

    public int Addition()
    {
        int iAns = 0; 
        iAns = this.iNo1 + iNo2;
        return iAns;
    }
    
    protected void finalize()
    {
        System.out.println("Inside Finalize");
    }
}

class ConstructorDestructor
{
    public static void main(String Arr[])
    {
        Arithematic aObj1 = new Arithematic();
        int iRet = aObj1.Addition();

        System.out.println("Addition is : " + iRet);

        Arithematic aObj2 = new Arithematic(11,21);
        iRet = aObj2.Addition();

        System.out.println("Addition is : " + iRet);

        aObj1 = null;
        aObj2 = null;

        System.gc();

        System.out.println("End of Main");
    }
}