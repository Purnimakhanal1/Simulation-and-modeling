#include<iostream>
using namespace std;

class Sim{
	public:
		int days = 6;
		int hours = 9;
		int total_minutes;
		int total_call = 1620;
        float meanarrival, interarrival;
    Sim(int d, int h,int tc, float ma = 0, float ia = 0){
    	 days = d;
    	 hours = h;
    	 total_minutes = 0;
    	 total_call = tc;
    	 meanarrival = ma;
    	 interarrival = ia;
}

    void calculate(){
    	total_minutes = days*hours*60;
    	meanarrival = (float)total_minutes/total_call;
    	interarrival = 1/meanarrival;
    	
	}	
	
	void display(){
		cout<<"Total minutes:"<<total_minutes;
		cout<<"\nMeanarrival rate:"<<meanarrival;
		cout<<"\nInterarrival time:"<<interarrival;
	}
	 
};
int main()
{
Sim s1(6,9,1620);
s1.calculate();
s1.display();
return 0;
}
