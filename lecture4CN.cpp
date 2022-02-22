/*

// Code : Square Pattern

#include<iostream>
using namespace std;


int main(){

  int N;
  cin>>N;
  int i=1;
  while(i<=N){
      int j=1;
      while(j<=N){
          cout<<N;
          j++;
      }
      cout<<endl;
      i++;
  }
}
-------------------------------------------------------------------------------------------------------------

//Code : Triangular Star Pattern

#include<iostream>
using namespace std;


int main(){

  int n;
  cin>>n;
  int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
----------------------------------------------------------------------------------------------------------------

//Code : Triangle Number Pattern

#include<iostream>
using namespace std;


int main(){

  int n;
  cin>>n;
  int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
}

}
-----------------------------------------------------------------------------------------------------------------

//Code : Reverse Number Pattern

#include<iostream>
using namespace std;


int main(){
  int n;
  cin>>n;
  int i=1;
    while(i<=n){
        int p=i;
        int j=1;
        while(j<=i){
            cout<<p;
            p--;
            j++;
        }
        cout<<endl;
        i++;
    }
}
-------------------------------------------------------------------------------------------------------------

//Code : Alpha Pattern

#include<iostream>
using namespace std;


int main(){
    
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char startchar='A'+i-1;
        while(j<=i){
            cout<<startchar;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
-----------------------------------------------------------------------------------------------------------------

//Code : Character Pattern

#include<iostream>
using namespace std;


int main(){

   int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char startchar='A'+i-1;
        while(j<=i){
            char ch=startchar+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}
----------------------------------------------------------------------------------------------------------------

//Code : Interesting Alphabets

#include<iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char startchar='A'+n-i;
        while(j<=i){
            char ch=startchar+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}
-----------------------------------------------------------------------------------------------------------------
*/























