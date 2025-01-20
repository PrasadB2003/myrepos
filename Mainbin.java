class Node {

    
    int data ;
     Node next ;
    
    
     Node(int d){
    data = d ;
    next = null;
    
    
     }
    
    };
    
    
    class LinkledList{

    Node head;
    

    LinkledList(){
    
    
     head = null;
    
    }
    
    
    void insert(int data){
    
    Node newNode= new Node(data);
    
        if(head  == null){
    
    
    
    head = newNode;
    
    
        }
        else{
    
    Node  temp = head;
    
    while(temp.next != null){
    
    
        temp = temp.next;
    }
    
    temp.next = newNode;
    
    
    
        }
    }
    
    void display(){
    
    
        Node temp = head ;
    
    
        while(temp.next != null){
    
    
            System.out.print(temp.data +"->");
    
    
            temp = temp.next;
        }
    }
    
    
    
    
    
    
    
    
    
    
    };
    
    
    




class Mainbin{




public static void bubbleSort(int []arr , int n){


    for(int i = 0 ;i <n    ; i++ ){



        for(int j = 0 ; j< n -i-1 ;j++ ){



            if(arr[j]>arr[j+1]){

                int temp = arr[j];

                arr[j] = arr[j+1] ;
                
                arr[j+1] = temp;
                
            }
        }

    }
       
        
}


public static void insertionSort(int []arr , int n){


    for(int i = 1 ;i <n    ; i++ ){

int key = arr[i];
int j = i -1 ;



while (j >0 && key < arr[j]) {
    arr[j+1] = arr[j];
    j--;

}

arr[j+1] = key;


      
    }
       
        
}


public static void SeletionSort(int []arr , int n){


  for(int i = 0 ;i  < n-1 ; i++){

int minindex = 0 ;

for(int   j = i +1 ;j  < n ; j++){

if(arr[j]<arr[minindex]){


    minindex = j;
}


}

int temp = arr[i];

arr[i] = arr[minindex];


arr[minindex] = temp;






  }
       
        
}
public static void Merge(int []arr , int s , int mid, int e){

int n = mid - s +1 ;
int m  = e - mid;



int []left = new int[n];
int []right = new int[m];


for(int i = 0; i < n ; i++){
left[i] = arr[s + i];

}

for(int i = 0; i < m ; i++){
    right[i] = arr[mid + i +1];
    
    }

    int  i  = 0 , j = 0 , k = s;

    while ( i< n && j < m) {
        
if(left[i] <= right[j]){


    arr[k++]  = left[i++];
}
else{

    arr[k++]  = right[j++];
}



    }



    while (i< n) {
        arr[k++]  = left[i++];
    }
    
    

    while (j< m) {
        arr[k++]  = right[j++];
    }
    



}


public static void  mergeSort(int []arr , int s , int e ){

    if(s < e){
int mid = s + (e -s)/2;

mergeSort(arr, s, mid);

mergeSort(arr, mid+1, e);

Merge(arr , s ,mid, e);


    }






}

public static void binarySearch(int []arr , int key, int s ,int e){

int mid = s + (e -s )/2;

if(s>=e){
    
    System.out.println("not found");
    
    return;

}

    if(arr[mid] == key){

        System.out.println("element found");

        return;
    }
else if(arr[mid] > key){


binarySearch(arr, key, s, mid-1);



}else{

    binarySearch(arr, key, mid, e);



    
}

















}

public static void main(String args[]){


LinkledList L = new LinkledList();

L.insert(10);

L.insert(20);
L.insert(30);
L.insert(40);
L.insert(50);


L.display();
}



}