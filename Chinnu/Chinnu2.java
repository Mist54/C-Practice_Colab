/*To count the number of odd number*/
import java.util.*;
public class Count{
  public static void main(String[] args) {
    int myNum[] = {1,2,3,4,5};
    int count=0;
    for(int i=0;i<myNum.length()-1;i++){
      if((myNum[i]%2)!=0){
        count=count+1;
      }
    }
    System.out.println("Number of odd numbers:"+count);
  }
}