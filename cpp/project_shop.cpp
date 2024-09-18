#include <iostream>
using namespace std;

int main (){

    int count100 = 0;
    int count20 = 0;
    int count1 = 0;
    int x ;
    cout<<"emter Your Money ";
    cin>>x;

    while (x!=0)
    int final= 0;
    {
        if ( x/100)
        {
            int c = x/100;
            final = x - c*100; 
           count100 ++;
              

        }
       
        
        
        count100  = x/100;
        count20 = count100/20;
        count1 = count20/1;


    }
    


    switch (x)
    {
    case :
        /* code */
        break;
    
    default:
        break;
    }  
}