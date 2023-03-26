#include <iostream>

using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};
struct Array *ob;
void create_arr(){
    ob = new Array[1];
    //cout<<"Enter the size of the array: ";
    ob->size = 2;
    
    ob->A = new int[ob->size];
    //cout<<"Enter the number of element: "<<endl;
    ob->length = 4;
    //cout<<"Enter the elements: ";
    //for(int i = 0;i<ob->length;i++){
    ob->A[0] = 1;
    ob->A[1] = 2;
    ob->A[2] = 3;
    ob->A[3] = 4;

    //}
    
}

int search(struct Array *ob,int x){
    for(int i=0;i<ob->length;i++){
        if(x  == ob->A[i]){
                return i;
        }

    }
    
    return -1;

}
int Get(struct Array *ob, int index){
    for(int i=0;i<ob->length;i++){
        if(ob->A[index]  == ob->A[i]){
                return ob->A[i];
        }

    }
    
    return -1;
}
void  Display(struct Array *ob){
    cout<<"\nElements Are: ---------"<<endl;
    for(int i=0;i<ob->length;i++){
        cout<<" "<<ob->A[i];
    }
}

void append(struct Array *ob, int x){
    ob->A[ob->length] = x;
    ob->length ++;
}

void insert(struct Array *ob, int index, int x){

    if(index >=0 && index <= ob->length){
        for(int i =ob->length;i>index;i--){
           ob->A[i] = ob->A[i-1];

        }
         ob->A[index] = x;
           ob->length++;
    }
}

int delet(struct Array *ob, int index){
    if(index>=0 && index<= ob->length){
        int x = ob->A[index];
        for(int i = index+1;i<=ob->length;i++){
            ob->A[i-1] = ob->A[i]; 
        }
                 ob->length -- ;

            return x;

    }
                return 0;

}

int main()
{
 
     create_arr();
     Display(ob);
     cout<<"\nThe index: "<<search(ob, 3);
    cout<<"\nThe Element At index: "<<Get(ob, 3);
    append(ob,5);
    Display(ob);
    insert(ob,0,0);
    Display(ob);
    delet(ob,5);
    Display(ob);
    return 0;
}
