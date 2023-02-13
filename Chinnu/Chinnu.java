/*Swap numbers without using third variable*/
import java.util.*;
public class Swap1 {
  public static void main(String[] args) {
    int num1=10, num2=20;
    if(num1!=num2)
    {
      num1=num1+num2;
      num2=num1-num2;
      num1=num1-num2;
    }
    System.out.println("Swapped number:"+num1+ "and"+num2);
  }
}