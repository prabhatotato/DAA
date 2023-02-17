/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void findTriplet(int arr[], int n){
    
    
    for(int k=0; k<n; k++){
        for(int j= 0; j<n; j++){
            for(int i= j+1; i<n; i++){
                if(arr[k]== arr[i] + arr[j]){
                    
                    cout<<j+1<<" "<<i+1<<" "<<k+1;
                    return;
                }
            }
        }
    }
    
    cout<<"no sequence found";
    
}

int main()
{
    int n= 15;
    int arr[] = {64, 69, 82, 95, 99, 107, 113, 141, 171, 350, 369, 400, 511, 590, 666 };
    findTriplet(arr,n);
    //int arr[]={24, 28, 48, 71, 86, 89, 92, 120, 194, 201};
    //findTriplet(arr,10);

    return 0;
}
