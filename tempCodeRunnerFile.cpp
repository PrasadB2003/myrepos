#include<bits/stdc++.h>
using namespace std ;


void revstr(string str){

int i  = 0 ;
int j = str.length()-1;



while(i <=j){



swap(str[i++] ,str[j--]);


}



cout<<str<<endl;




}


int main(){

string  str ;
cin>>str ;




revstr(str);







}