#include<iostream>
using namespace std;

class Sim{
	public:
		int total_hours = 3240;
		int total_call = 1620;
        float meanarrival, interarrival;
    Sim(int th, int tc, float ma = 0, float ia = 0){
    	 total_hours = th;
    	 total_call = tc;
    	 meanarrival = ma;
    	 interarrival = ia;
}

    void calculate(){
    	meanarrival = (float)total_hours/total_call;
    	interarrival = 1/meanarrival;
    	
	}	
	
	void display(){
		cout<<"Meanarrival rate:"<<meanarrival;
		cout<<"\nInterarrival time:"<<interarrival;
	}
	 
};
int main()
{
Sim s1(3240, 1620);
s1.calculate();
s1.display();
return 0;
}
