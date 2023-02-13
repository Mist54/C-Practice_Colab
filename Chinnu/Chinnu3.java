//Program to print spiral matrix
import java.util.*;
import java.lang.*;
public class SpiralMatrix{
  public static void main(String[] args){
    int size=10;
    int[][] myarr= new int[size][size];
  int i,j,n=1,left=0,top=size-1;

  
for(i=1; i<=size/2; i++, left++, top--) {
  for(j=left;j<=top;j++,n++){
    myarr[left][j];
  }
  for(j=left+1;j<=top;j++,n++){
    myarr[j][top];
  }
  for(j=top-1;j>=left;j--,n++){
    myarr[top][j];
  }
  for(j=top-1;j>=left+1;j--,n++){
    myarr[j][left];
  }
}
for(i=0;i<size;i++){
  for(j=0;j<size;j++){
    System.out.print(myarr[i][j]);
  }
System.out.println();
  }
  }
  
}