class Demo
{
    public int i = 11;
    final public int j = 21;

    public Demo()
    {
        this.i = 12;
        //this.j = 22;          //ERROR
    }

}

class FinalData3
{
    public static void main(String A[]) 
    {
        Demo dObj = new Demo();

        System.out.println(dObj.i);
        System.out.println(dObj.j);

        dObj.i++;
        //dObj.j++;                     //ERROR
        
    }    
}
