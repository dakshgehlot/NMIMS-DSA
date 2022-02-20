#include<iostream>
using namespace std;
class queue{
    int* arr;
    int front,rear;
    public:
    queue(){
        arr=new int[5];
        front=-1;
        rear=-1;
    }
    int insert(int x){
        if(rear==4 && front==0){
            cout<<"Overflow Condition\n";
        }
        else if(front==-1 && rear==-1){
            front=rear=0;
            arr[rear]=x;
        }
        else if(front!=0 && rear==4){
            rear=0;
            arr[rear]=x;
        }
        else{
            rear++;
            arr[rear]=x;
        }
    }
    int pop(){
        if(front==-1){
            cout<<"Underflow Condition\n";
        }
        else if(front==rear){
            rear=front=-1;
        }
        else if(front==4){
            front=0;
        }
        else{
            front++;
        }
    }
    int display(){
        int i;
        if(front<rear){
            for(i=front;i<=rear;i++){
                cout<<arr[i]<<endl;
            }
        }
        else if(front>rear){
            for(i=front;i<=4;i++){
                cout<<arr[i]<<endl;
            }
            for(i=0;i<=rear;i++){
                cout<<arr[i]<<endl;
            }
        }
    }
};
int main(){
    queue qt;
    int choice, num;
    cout<<endl;
start: cout<<"Enter 1 to insert Phone Number in Queue\n";
    cout<<"Enter 2 to delete Phone Number from Queue\n";
    cout<<"Enter 3 to display Phone Numbers from Queue\n";
    cout<<"Enter Choice : ";
    cin>>choice;
    cout<<endl;
    do{
        switch(choice){
            case 1:
            cout<<"Enter Number you wish to insert : ";
            cin>>num;
            qt.insert(num);
            cout<<endl;
            goto start;
            break;

            case 2:
            qt.pop();
            goto start;
            break;

            case 3:
            qt.display();
            goto start;
            break;

            default:
            break;
        }
    }while(choice!=4);
}