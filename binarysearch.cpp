#include<bits/stdc++.h>

using namespace std;


void solve(vector<string> str, int n ){

pair<int ,string>p1;
   priority_queue<pair<int, string>, vector<pair<int, string>>
for(auto i : str){
str temp = "";
int num ;
for(auto j :i){

if(isalpha(j)){
    temp+=j;
}
else{
num = stoi(j);
}

}

p1=make_pair(num ,temp);



}





}


int main() {

vector<string>str = {"is2", "a3","Th1is"}




solve(str);




    return 0;
}
