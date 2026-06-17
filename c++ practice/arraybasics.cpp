/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{ 
    int x[5] = {3,4,6,7,9};
    int i;
    for(i=0; i<5;i++){
         cout<<x[i]<<endl;

    }
    cout<<x;*/
   
   /*int arr[5]={5,6,7,9,8}; 
   for(int i=0;i<5;i++){
   cout<<arr[i]<<endl;}
    int arr2[6];
    for(int i=1;i<=6;i++){
   cout<<"enter no."<<i<<endl;
          cin>>arr2[i];
        }
        cout<<"your elements: "<<endl;
          for(int j=1;j<=6;j++){
          cout<<arr2[j]<<endl;
}
}*/

    /* int arr1 [3][3] ;
     int arr2 [3][3] = {{3,5,7},{2,4,6},{1,8,9}};
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          cout<<"element of array: "<<endl;
          cin>>arr1[i][j];
        }
        }
        cout<<"elements are successfully added"<<endl;
           for(int k=0;k<3;k++)
           {
            for(int t=0;t<3;t++){
            cout<<arr1[k][t];
           }
           cout<<endl;
          }*/

          /*string pass = "JASHAN30";
          string pass2;
            for(int i=1;i<=3;i++){
              cout<<"enter pass2:  "<<endl;
              cin>>pass2;
              if(pass2!=pass){
                cout<<"you donot have acess"<<endl;
            
              }
              if(pass2==pass){
                cout<<"ACCESS"<<endl;
                break;
              }
            }*/

           /*int arr[3][3]={{3,5,6},{5,7,3},{8,5,2}};
            arr[1][0]=10;
            for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
              cout<<arr[i][j];
            }
          cout<<endl;}*/




            //string n= "jashan";
            //string m="Jashan";
            //cout<<sizeof(n)<<endl;
           // cout<<n.length();
           //size of(string name) - space of the string,array...
          // n.clear();
           //cout<<n<<endl;
           //cout<<n[3]<<endl;
           //.cout<<n.at(3)<<endl;
           //n.append("kaur");
           //cout<<n<<endl; 
           //cout<<n.compare(m)<<endl;

           //string x="Anand";
         //  string y = "abcde";
           //cout<<y.compare(x);

           //x.insert(2,"nfesj");
           //cout<<x;

           //x.erase();
           //cout<<x;

          // x.pop_back();
           //cout<<x;
           //const char ch= 'a';
           
            //x.push_back(ch);
            //cout<<x;
           //x.replace(0,5,"anaya"); 
           //cout<<x; 
           
           //char arr[10]={'h','e','l','l','o'};
           //character array is a array of character that end with slash zero"/0"

           /*char arr2[6]="hello";
           cout<<arr<<endl;
           cout<<arr2<<endl;
           //cout<<sizeof(arr)<<endl;
           cout<<strlen(arr)<<endl;//strlen
           for(int i=0;i<strlen(arr);i++){
            cout<<arr[i]<<end;
            }
            */
            //getting the length of string

           /*int m = 0;
           int count = 0;
           while (arr[m]!='\0')
           {
            count=count+1;
            cout<<arr[m]<<endl;
            m=m+1;
           }
           cout<<count<<endl;
          }
    */
   
   // char arr[5];
    //char arr2[6]={'h','e','l','l','o'};
    /*while(arr2[i]!='\0'){
      arr[i]=arr2[i];
      i=i+1;
    }
    cout<<arr<<endl;*/

   //cout<<strcpy(arr2,arr)<<endl; // time complexity of strcpy - O(n)
   
   //for(int i=strlen(arr2);i>=0;i--){
   //int i=strlen(arr2)-1;
   //while(i>=0){
    //cout<<arr2[i];
    //i--;
   //}}
   #include<iostream>
   using namespace std;
   int main(){
    int count = 0;
    string b= "aeiou";
    string a="hello";
    for(int i=0;i<a.length();i++){
      for(int j=0;j<b.length();j++)
      if(b[j]== a[i])
      {
        count = count + 1;
        cout<<"vowels are: "<<b[j]<<endl;
      }
    }
    cout<<"number of vowels: "<<count<<endl;
    return 0;

   }
  

  