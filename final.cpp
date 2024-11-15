#include <iostream>
#include <iomanip>
using namespace std; 


//global vars
string name;
string email;
string mobileNumber;
string accNum;
int cschoice;
int carchoice;


int listcars() {

    //arrays for cars
    
//four seater arrays
    string fourseaterArr[] = {"Toyota Camry", "Honda Accord", "Ford Focus", "Hyundai Sonata", "Mazda3"};
    string fourseat_transmission[] = {"Automatic", "Automatic", "Automatic", "Automatic", "Automatic"};
    string fourseat_status[] = {"Available", "Available", "Available", "Available", "Available"};
    string fourseat_fuel[] = {"Petrol", "Petrol","Petrol","Petrol","Petrol"};
//six seater arrays
    string sixseaterArr[] = {"Kia Carnival", "Hyundai Palisade", "Honda Odyssey", "Ford Explorer", "Toyota Highlander"};
    string sixseat_transmission[] = {"Automatic", "Automatic", "Automatic", "Automatic", "Automatic"};
    string sixseat_status[] = {"Available", "Available", "Available", "Available", "Available"};
    string sixseat_fuel[] = {"Petrol", "Petrol","Petrol","Petrol","Petrol"};
//eight seater array
    string eightseaterArr[] = {"Chevrolet Suburban", "Toyota Highlander", "Honda Pilot", "Ford Expedition", "Chevrolet Traverse"};
	string eightseat_transmission[] = {"Automatic", "Automatic", "Automatic", "Automatic", "Automatic"};
	string eightseat_status[] = {"Available", "Available", "Available", "Available", "Available"};
	string eightseat_fuel[] = {"Petrol", "Petrol","Petrol","Petrol","Petrol"};
    //arrcounts
   int fourseater = sizeof(fourseaterArr) / sizeof(fourseaterArr[0]);

	cout << "--------------" << endl;
	cout << "Car Brand \t\t\t\t"<< "Transmission \t\t\t" << "Fuel Type\t\t\t" << "Status" << endl;
	
	//switch case
    switch(cschoice){
        case 1:
	
            for(int i; i < fourseater; i++){
                cout << "[" << i + 1 << "] - " << left << setw(20) << fourseaterArr[i] << "\t\t" << fourseat_transmission[i] << "\t\t" << fourseat_fuel [i]<< fourseat_status[i] << endl;
            } 
            cout << "Enter your choice: ";
            cin >> carchoice;
            system("CLS");
            
            //options for specific car choice
	            switch(carchoice) {
	            	
	            	case 1: 
		            	cout << "toyotadeets";
		            	break;
		            	
		            case 2: 
		            	cout << "hondadeets";
		            	break;
		            	
		            case 3:
		            	cout << "forddeets";
		            	break;
		            case 4: 
		            	cout << "hyundaideets";
		            	break;
		            case 5: 
		            	cout << "mazdadeets";
		            	break;
		            default:
		            	cout << "kthnxbye";
		            	break; }
		            	
		            	
        break;
            
            
			
            
		case 2: 
		
			cout << "choice 2";
			//print 6seater
			break;
			
		case 3: 
			//print 8seater
			cout << "choice 3";
			break;
        default:
        
            cout << "ok";
    }
    
    cout << endl;
    
    
 /*   cout << "Input your choice of car: ";
    cin >> 
    
    */

}

int main() {

    cout << "Account Number: ";
    getline(cin, accNum);
    cout << "Enter your name: ";
    getline(cin,  name);
    cout << "Enter your mobile number: ";
    cin >> mobileNumber;
    cout << "Enter your e-mail address: "; 
    cin >> email;


    string seatcountArr[] = {"4 Seater", "6 seater", "8 seater"};  //array for num of seats
	int seatcount = sizeof(seatcountArr) / sizeof(seatcountArr[0]); //for num of items for seatcount array
    
    for (int i = 0; i < seatcount; i++) {
        cout << "[" << i + 1 << "] - " << seatcountArr[i] << endl;
    }

    //user input choice for how many seats
    cout << "Chose the type of car you would like to see: ";
    cin >> cschoice;
    cout << endl;

    system("CLS");

    listcars();
    //choices
    

}
