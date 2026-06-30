/*
MCQ'S  - answers
section-1.
1.  c. O(1)       -(0)  O(n)
2.  c. O(n)        
3.  b. sorted
4.  b. binary search

section-2.
5. b. 0
6. a. 3 rows,4 coloumns
7. d. 10
8. c. for
9. c. do-while
10. a. 012
11. c. continue
12. c. break
13. c.base case
14. b.321
15. b. stack
16  b. O(logn)
17. a. *
       **
       ***
18. b. %
19. c. for
20. c. binary search
*/

/*section c
21.[linear search]*/
/*#include<iostream>
using namespace std;
int main(){
int n;
     cout<<"enter elememt that you want to find: "<<endl;
     cin>>n;
     int i;
     bool res;
     int arr[5]={10,20,30,40,50};
     for( i=0;i<5;i++){
        if(arr[i]==n){
            res=true;
            break;
        }  
        else{
            res = false;
        }  }
    if(res==true){
        cout<<"element is found at: "<<i<<endl;
    }
    else {
        cout<<"element not found"<<endl;
    }
    

}*/



/*[binary search]*/
/*#include<iostream>
using namespace std;
int main(){
  int arr[7]={1,5,8,12,15,20,25};
    int n;
    cout<<"enter n: ";
    cin>>n;
  int start= 0;
  int end = sizeof(arr)-1;
   bool result;
   int mid;
   while(start<=end){
    mid = (start+end)/2;
      if(arr[mid]==n){
      result = true;
      break;
  }else if(n>arr[mid]){
        start=mid+1;
  }else{
    end = mid -1;
  }
  }if(result == true){
    cout<<"element found at: "<<mid<<endl;
  }else{
    cout<<"element not found";
}
}*/

/*[factorial]*/
/*#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
 cout<<"factorial:"<<factorial(5);
}*/

/*[2D array]*/
/*#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of all elements = " << sum << endl;

    return 0;
}*/
/*question 25[pattern printing]*/
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter n :"<<endl;
  cin>>n;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}*/


/*
question 26 - time complexity
i.  O(n)
ii. O(n^2)
iii. O(log n)
iv.  O(n)
*/

