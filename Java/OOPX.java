class Arithematic
{
    public int iNo1;
    public int iNo2;

    public Arithematic()
    {
        this.iNo1 = 0;
        this.iNo2 = 0;
    }

    public Arithematic(int A, int B)
    {
        this.iNo1 = A;
        this.iNo2 = B;
    }

    public int Addition()
    {
        int iAns = 0;
        iAns = this.iNo1 + this.iNo2;
        return iAns;
    }

    public int Substraction()
    {
        int iAns = 0;
        iAns = this.iNo1 - this.iNo2;
        return iAns;
    }
}

class OOPX
{
    public static void main(String Arr[])
    {
        Arithematic aObj1 = new Arithematic(11,10);     //aObj1(reference) : 8 bytes (memory on heap)

        int iRet = aObj1.Addition();
        System.out.println("Addition is : " + iRet);

        iRet = aObj1.Substraction();
        System.out.println("Substraction is : " + iRet);

        aObj1 = null;
    }
}