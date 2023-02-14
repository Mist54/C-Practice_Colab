//Prg to get longest string from array
import java.util.*;
import java.lang.*;
public class Array{
  public static void main(String[] args){
    String[] arr= new String[10]
      int maxlen=0;
      String[] longestWord= new String[50];
    int len=arr.length();
    for(int i=0;i<len;i++){
      if(arr[i]>len)
      {
        maxlen=len;
        longestWord=arr[i]
      }
    }
    System.out.println("The longest word int the array:" +longestWord+"and the length"+maxlen);
  }
}
//Create the string directly..