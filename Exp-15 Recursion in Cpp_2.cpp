//Name: Sameer Yasin
//PRN: 24070123092
//Branch: ENTC B1
//Exp-15

//Program-2
#include<iostream>
using namespace std;

int add(int n){
    if(n==0){
        return 0;
    }

    else{
        return n + add(n-1);
    }
}

int main(){

    int num;

    cout<<"Enter a number:";
    cin>>num;

    cout<<"Sum of first "<<num<<" natural numbers is:"<<add(num)<<endl;

    return 0;
}


/*==========OUTPUTS==========
Enter a number:10
Sum of first 10 natural numbers is:55
*/
