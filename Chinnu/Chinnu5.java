//Prg to check uppercase and lowercase in  string
import java.util.*;
import java.lang.*;
public class Str{
  public static void main(String[] args){
    String str="Hello";
    Upper(str);
  }

  public static int Upper(String s1){
    if(s1!=null)
      while(s1.toUpperCase()==true){
        System.out.print("String is in uppercase"+s1);
        return s1;
      }
 public static int Lower(String s2){
   if(s2!=null)
    while(s2.ToLowerCase())
      {
        System.out.print("String is in lowercase"+s2);
        return s2;
      }
  }
}