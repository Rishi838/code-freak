//Java Program to Reverse a Number

import java.util.*;

public class reverse
{
public static void main(String args[])
{
    System.out.println("Enter a number ");
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int rev =0;
    int temp = n;
    //for(int i = 0;i<n;i++){
        while(temp != 0){
        int rem = temp%10;
        rev = 10*rev + rem;
        temp = temp/10;
    }
    System.out.println("Reverse number of "+n +" is " +rev) ; 
}
}
