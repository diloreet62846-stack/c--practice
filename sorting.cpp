/* In algorithm
1. start and end
2. []->comments
3.steps
4. no. of steps should be finite
*/

 /*[BUBBLE SORT]*/                                        // algorithm
                                                             
/*#include<iostream>                                     bubble sort[arr[],array length]
using namespace std;                                     1. START
int main(){                                              2. definr an array and array length
    int arr[6]={6,3,8,4,9,1};                            3. start a master loop (i) from 0 to less than array length -1
    int n = 6;                                           4. define another loop inside the master loop (j) which starts from 0 and calls till array length
    for(int i=0;i<n-1;i++){                                 -i-1.
        bool res = false;                                5.If arr[j]>arr[j+1] Then Swap
        for(int j=0;j<n-i-1;j++){                        6.Repeat the step 5 till array length-1 times.
                                                         6.define a loop outside the master loop to print the sorted elements of the array
            if(arr[j]>arr[j+1]){                         7.END.
       swap(arr[j],arr[j+1]);
        res = true;
        }
    }
    if(res==false){
        break;
    }
    }
     for(int k=0;k<n;k++){
        cout<<arr[k];
    }
}*/

/*[QUICK SORT]*/
/*#include<iostream>
using namespace std;
int main(){
int arr[6]={3,6,8,4,2,1};
int n = 6;

}*/

/*[selection sort]*/                                    // selection sort[arr[],array length]
 /*#include<iostream>                                     1.START
 using namespace std;                                     2.define an array and array length.
 int main(){                                              3.  loop starts i=0 and i<n-1 times.
    int arr[6]={5,3,8,4,1,0};                             4. define  mindix = i.       
    int n = 6;                                            5 another loop j inside loop i ,j=i+1 and j<n.
    for(int i =0;i<n-1;i++){                              6. if(arr[j]<arr[mindix]) then mindix=j
        int minidx = i;                                   7. swap the elements arr[i],arr[mindix] .
for(int j = i+1;j<n;j++){                                 8. define loop k outside loop i to print the elements
            if(arr[j]<arr[minidx]){                       9.END
                minidx=j;
            }
        }
        swap (arr[i],arr[minidx]);
    }
    for(int k=0;k<n;k++){
    cout<<arr[k];
}
 }*/


 /*[merge sort]*/
  /*#include<iostream>
  using namespace std;
  void merge(int arr[],int start,int mid,int end){
    int n1 = mid-start+1;
    int n2 = end-mid;
    //temporary arrays
    int L[n1],R[n2];
    // copy data to temporary arrays
    for(int i=0;i<n1;i++)
    L[i]=arr[start+i];
    for(int j=0;j<n2;j++)
    R[j]=arr[mid+1+j];
    int i=0;
    int j=0;
    int k=start;
    while( i<n1 && j<n2){
      if(L[i]<=R[j]){
        arr[k]=L[i];
        i++;
    }
    else{
        arr[k]=R[j];
        j++;
    }
    k++;
    }


    // Copy remaining elements of L[]
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }


    // Copy remaining elements of R[]
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}

    void mergesort(int arr[],int start,int end){
    if(start<end){
        int mid = start+(end-start)/2;   //star+end/2
        //left half 
        mergesort(arr,0,mid);
        //right half
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }

  }
    int main(){
    int arr[6]={7,4,9,3,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    cout<<"soted array";
    for(int i =0; i<n;i++)
    cout<<arr[i]<<" ";
}*/