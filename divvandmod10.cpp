#include <iostream>

using namespace std;
double e(int x, int n){
    
    static double p = 1,f= 1;
    double r;
    if(n == 0)
        return 1;
    
    r = e(x,n-1);
    p = p*x;
    f = f*n;
    return r + p/f;
}

int mod(int n){
    return n%10;
}
int divv(int n){
    return n/10;
}
void both(int n){
    cout<<"Modulo="<<mod(n)<<endl;
    cout<<"Divv="<<divv(n)<<endl;
}


int main()
{   
    
    int choice;
    while(1){
        int n;
        cout<<"enter the n"<<endl;
        cin>>n;
        cout<<"1.modulo"<<endl;
        cout<<"2.divion"<<endl;
        cout<<"3.Both"<<endl;
        cout<<"Enter the choice"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
               cout<<"Modulo="<<mod(n)<<endl;
                break;
            case 2:
                cout<<"Divv="<<divv(n)<<endl;
                break;
            case 3:
                both(n);
                break;
            case 4:
                exit(1);
                break;
                
            default:
                cout<<"Wrong choice"<<endl;
                break;
                
        }
    }
    

    return 0;
}
