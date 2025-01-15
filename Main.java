import java.util.*;

class Main {

public static int binarysearch(int[] arr, int key){

int start = 0 ;
int end = arr.length -1;

while(start<=end){
int mid = (start + end)/2;

if(arr[mid] == key){

    return mid;
}
else if(arr[mid] > key){


    end  = mid -1 ;
}else{


    start = mid +1;
}







}










return 0;
}

    public static void main(String[] args) {
     System.out.println("hiii");

  int [] arr = {1,2,3,4,5,6,7,8};
  int key = 3;
System.out.println(binarysearch(arr, key));



    }
}
