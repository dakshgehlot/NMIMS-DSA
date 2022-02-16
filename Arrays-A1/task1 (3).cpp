#include <iostream>
using namespace std;

int main(){
    int count=0;
    char cmd[2];
    cout<<"counter=0 "<<endl;
    cout<<"press 'p'to push the counter \npress'r' to reset the counter \npress 't' to terminate the counter"<<endl;
    while(true){
        cin>>cmd;
        if(cmd[0]=='p'){
            count++;
            cout<<"counter="<<count<<endl;
        }
        else if(cmd[0]=='r'){
            count=0;
            cout<<"counter="<<count<<endl;
        }
        else if(cmd[0]=='e'){
            break;
        }
        
        
        else{
            cout<<"wrong input"<<endl;
        }
    }
    cout<<"current counter value_"<<count;



    return 0;
}