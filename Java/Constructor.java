class Arithematic
{
    public int iNo1;
    public int iNo2;

    public Arithematic()
    {
        System.out.println("Inside Default Contructor");
        this.iNo1 = 0;
        this.iNo2 = 0;
    }

    public Arithematic(int A, int B)
    {
        System.out.println("Inside Paramtertised Constructor");
        this.iNo1 = A;
        this.iNo2 = B;
    }

    public int Addition()
    {
        return iNo1 + iNo2;
    }
}

class Constructor
{
    public static void main(String Arr[])
    {
        Arithematic aObj1 = new Arithematic();
        int iRet = aObj1.Addition();

        System.out.println("Addition is : " + iRet);

        Arithematic aObj2 = new Arithematic(11,21);
        iRet = aObj2.Addition();

        System.out.println("Addition is : " + iRet);
    }
}