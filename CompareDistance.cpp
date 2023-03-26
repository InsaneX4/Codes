#include <iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inches;
	public:
		void set_distance()
		{
			cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inches;
		}
		
		void compare(Distance d1, Distance d2){
		    if(d1.feet+d1.inches > d2.feet+d2.inches){
		        cout<<"Largest Distance is: feet= "<<d1.feet<<" inches= "<<d1.inches<<endl;
		    } else{
		        cout<<"Largest Distance is: feet= "<<d2.feet<<" inches= "<<d2.inches<<endl;;
		    }
		}
};
int main()
{
	Distance d1, d2, d3;
	d1.set_distance();
	d2.set_distance();
	d3.compare(d1,d2);
	return 0;
}