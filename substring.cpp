#include<iostream>
using namespace std;

int find(string name, string sub){

int found=name.find(sub);

return found;


}



int main(){

    string str="helloworld";
    string sub="world";

    cout<<find(str,sub);
}

