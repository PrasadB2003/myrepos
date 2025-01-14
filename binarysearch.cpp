#include<bits/stdc++.h>

using namespace std;


bool cnt(string st){

int onecnt = 0;
int zerocnt =0 ;


for(auto i : st){

if(i =='1'){

    onecnt++;
}

else{


    zerocnt++;
}
}

return onecnt== zerocnt;





}
void cntSubstr(string &s, int inde , int n ,string temp){
if(inde>=n){
if(cnt(temp)){
cout<<temp<<endl;

}
    return ;
}



temp.push_back(s[inde]);


cntSubstr(s,inde+1, n, temp);

temp.pop_back();


cntSubstr(s,inde+1, n, temp);







}



void solve(string s){


int n = s.length();
for(int i = 0 ;i < n; i++){

int onecnt = 0;
int zerocnt =  0 ;




    for(int j = i ;j <n ; j ++){


if(s[j] == '1'){


    onecnt ++;
}
else{
    zerocnt++;
}




if(zerocnt  == onecnt){





    cout<<s.substr(i , j- i +1) <<endl;
    
    }

    }
}


}


int main() {


string s ="00110011";


solve(s);




    return 0;
}
