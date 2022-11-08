#include <iostream>
using namespace std;
class ABC{
static int i;
};
int ABC::i;

int main(){
cout << sizeof(ABC);
return 0;
}