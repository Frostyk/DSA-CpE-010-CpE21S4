#include <iostream>
#include <queue>
using namespace std;

int max_size=3;
void display(queue<string> pl) 
{ 
    while(true){
        if(!pl.empty())
            {
            cout << pl.front() << endl;
            pl.pop();
            }
        else{
            break;
        }
    }
}

void ClearQueue(queue<string> &pl) 
{ 
    while(!pl.empty())
    {
        pl.size();
        pl.pop();
    }
}
void CheckQueue(queue<string>pl)
{
    if(pl.size()==0){
    cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is Full"<<endl;
    }
}
int main()
{ 
    queue<string>pl;
    cout << "Push elements into queue:" << endl;
    // Add items to the queue
    pl.push("C++");
    pl.push("Java");
    pl.push("Python");

    cout << "Initial Queue:" << endl;
    display(pl);
    pl.pop();
    cout << "Final Queue:" << endl;
    display(pl);
    cout << "Cleared Queue:"<<endl;
    ClearQueue(pl);
    display(pl);
    cout<<"Checking if Full or Empty;"<<endl;
    CheckQueue(pl);
    return 0;
}