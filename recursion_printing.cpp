#include <iostream>
using namespace std;
int main() {
    void printNos(int N)
    {
        if (N==0) return;
        string s;
         if(N>0)
        {  
         s+=to_string(N);
         N--;
         printNos(N);
        }
        cout<<s<<" ";
       
    }
}
