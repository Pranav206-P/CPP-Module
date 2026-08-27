/*
 * P1.cpp
 * Problem: Sensor Reading Classifier
 * Created on: 27-Aug-2026
 * Author: Pranav Patil_AC
 */

#include <iostream>
using namespace std;

int StatusCode(double );
void systemMsg(int s_code);

int main(){

	double temp,f;

	cout << "Enter the Floor Temperature:" << endl;
	cin >> temp;

	
	f = (temp * 9 / 5) + 32;
	cout << "Temperature : " << temp << char(248) << "C" << " / " << f << char(248) << "F" << endl;

         
	int s_code = StatusCode(temp);

	systemMsg(s_code);
    
	cout << (temp >= 25 ? "Reading     : Above Average" : "Reading     : Below Average" ) << endl;
}

// to draw Status CODE FUNCTION
		 
int StatusCode(double temp) {

	if (temp < 0) {
		
		return -1;
        
	}

    else if (temp >= 0 && temp < 30){

		return 0;

	}
	
	else if (temp >= 30 && temp < 45 ){

		return 1;

	}
		 
	else if (temp >= 45 && temp < 60){

		return 2;

    }
	
	else if (temp >= 60){

		return 3;

	} 

	return -1;
}
//===================================================================================
// Pure SYSTEM MSG Func.
void systemMsg(int s_code){

	switch (s_code){

		case -1:

			cout << "Status      : " << "SENSOR_ERROR"<< endl;
			cout  << "Action      : " <<"Sensor fault-- check wiring" << endl;
		 		break;

		case 0:

			cout << "Status      : " << "NORMAL" << endl;
		 	cout  << "Action      : " <<"No action required" << endl;
		 		break;
		 	 
		case 1:

		    cout << "Status      : " << "WARNING" << endl;
			cout  << "Action      : " <<"Alert sent to supervisor" << endl;
			    break;
			  
		case 2:
			
			cout << "Status      : " << "CRITICAL" << endl;
			cout  << "Action      : " <<"Cooling system triggered" << endl;
			    break; 
			  
		case 3:
			
			cout << "Status      : " << "SHUTDOWN" << endl;
			cout  << "Action      : " <<"Emergency shutdown initiated" << endl;
		 		break; 
		 }
}


