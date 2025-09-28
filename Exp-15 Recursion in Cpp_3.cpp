//Name: Sameer Yasin
//PRN: 24070123092
//Branch: ENTC B1
//Exp-15

//Program-3
#include<iostream>
using namespace std;

void revstr(char *str){
    if(*str){
        revstr(str+1);
        cout<<*str;
    }
}

int main(){

    string str;

    cout<<"Enter a string:";
    cin>>str;

    cout<<"Reversed string is:";
    revstr(&str[0]);

    return 0;
}


/*==========OUTPUTS==========
Enter a string:nishka
Reversed string is:akhsin
*/
