#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <Windows.h>
using namespace std; 


//global vars
string name;
string email;
string mobileNumber;
string accNum;
int cschoice;
int carchoice;
char confirm = 'y';
double price = 1000;
int duration;
double totalPrice;

//	system("0e");


int invoice() {
	cout << "\n" << name << "\n" << totalPrice;
	return 0;
}

int calculate() {
	cout << "Please input the duration of the rental : ";
	cin >> duration;
	
	totalPrice = duration * price;

	cout << "\n" << totalPrice;
	
	invoice();
}

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
    
   int fourseater = sizeof(fourseaterArr) / sizeof(fourseaterArr[0]); //Num of items in the array

	cout << "--------------" << endl;
	cout << "Car Brand \t\t\t\t"<< "Transmission \t\t\t" << "Fuel Type\t\t\t" << "Status" << endl;

	//switch case
    switch(cschoice){
        case 1:
		//////////////////////-----------------lISTAHAN NG CARS-----------///////////
            for(int i; i < fourseater; i++){
                cout << "[" << i + 1 << "] - " << left << setw(20) << fourseaterArr[i] << "\t\t" << fourseat_transmission[i] << "\t\t" << fourseat_fuel [i] << "\t\t" << fourseat_status[i] << endl;
            } 
            
            
            cout << "Enter your choice or press [x] to go back: ";
            cin >> carchoice;
            system("CLS");
            
        
       
		

									return 0;
							
            //options for specific car choice
	            switch(carchoice) {
	            	
	            
	            	case 1: 
		            	cout << "Car: Toyota Camry" << endl;
						cout << "Transmission: Automatic" << endl;
						cout << "Fuel Type: Petrol" << endl;
						cout << "Status: Available" << endl;
						cout << "Price per day: $4000" << endl << endl;
						
						
		            	cout << "Are you sure this is what you want? (y/n)";
		            	cin >> confirm;
		            	
		            	price = 4000; //for each car, please initialize the price
						while (confirm != 'y') {
								
								listcars();
								
								
							};
							calculate();
														
		            	break;
		            	
		            case 2: 
		            	cout << "hondadeets" << endl;
		            	cout << "Confirm choice (y/n): ";
		            	cin >> confirm;
		            	
							while (confirm != 'y') {
								
							
								listcars();
							}; 
							
															
		            	break;
		            	
		            	
		            case 3:
		            	cout << "forddeets" << endl;
		            	
		            	while (confirm != 'y') {
								listcars();
							};
		            	break;
		            case 4: 
		            	cout << "hyundaideets" << endl;
		            	while (confirm != 'y') {
								listcars();
							};		            	
		            	break;
		            case 5: 
		            	cout << "mazdadeets" << endl;
		            	while (confirm != 'y') {
								listcars();
							};
		            	break;
		            default:
		            	cout << "kthnxbye";
		            	break; 
						
						cout << "Are you sure this is what you want? (y/n)"; //for confirmation
		            	cin >> confirm;
		            	
					while (confirm != 'y' || confirm == 'n') {
						listcars();
					}
					
					} //closing switch case
		            	 
		            	 	
					     	
		            break; //case 1 of carchoice break
					
        	
        
		case 2: 
		
			for(int i = 0; i < fourseater; i++){
                cout << "[" << i + 1 << "] - " << left << setw(20) << sixseaterArr[i] << "\t\t" << sixseat_transmission[i] << "\t\t" << sixseat_fuel [i] << "\t\t" <<sixseat_status[i] << endl;
            } 
            cout << "Enter your choice or press [x] to go back: ";
            cin >> carchoice;
            system("CLS");
            
			//print 6seater
			//////////`////////////
			
			
			switch(carchoice) {
	            	
	            	case 1: 
		            	cout << "toyotadeets" << endl;
		            	cout << "Are you sure this is what you want? (y/n)";
		            	cin >> confirm;
		            	
		            	price = 4000; //for each car, please initialize the price
							while (confirm != 'y') {
								listcars();
							};
						
														
		            	break;
		            	
		            case 2: 
		            	cout << "hondadeets" << endl;
		            	cout << "Confirm choice (y/n): ";
		            	cin >> confirm;
		            	
							while (confirm != 'y') {
								listcars();
							};								
		            	break;
		            	
		            case 3:
		            	cout << "forddeets" << endl;
		            	
		            	while (confirm != 'y') {
								listcars();
							};
		            	break;
		            case 4: 
		            	cout << "hyundaideets" << endl;
		            	while (confirm != 'y') {
								listcars();
							};		            	
		            	break;
		            case 5: 
		            	cout << "mazdadeets" << endl;
		            	while (confirm != 'y') {
								listcars();
							};
		            	break;
		            default:
		            	cout << "kthnxbye";
		            	break; 
						
						cout << "Are you sure this is what you want? (y/n)"; //for confirmation
		            	cin >> confirm;
		            	
					while (confirm != 'y' || confirm == 'n') {
						listcars();
					}
					
					} //closing switch case
		            	      	
		            break; //case 1 of carchoice break
			
		case 3: 
		
			for(int i = 0; i < fourseater; i++){
                cout << "[" << i + 1 << "] - " << left << setw(20) << eightseaterArr[i] << "\t\t" << eightseat_transmission[i] << "\t\t" << eightseat_fuel [i] << "\t\t" << eightseat_status[i] << endl;
            } 
            cout << "Enter your choice or press [x] to go back: ";
            cin >> carchoice;
            system("CLS");
            
			//print 8seater
			break;
			
			switch(carchoice) {
	            	
	            	case 1: 
		            	cout << "toyotadeets" << endl;
		            	cout << "Are you sure this is what you want? (y/n)";
		            	cin >> confirm;
		            	
		            	price = 4000; //for each car, please initialize the price
							while (confirm != 'y') {
								listcars();
							};
							calculate();
														
		            	break;
		            	
		            case 2: 
		            	cout << "hondadeets" << endl;
		            	cout << "Confirm choice (y/n): ";
		            	cin >> confirm;
		            	
							while (confirm != 'y') {
								listcars();
							};								
		            	break;
		            	
		            case 3:
		            	cout << "forddeets" << endl;
		            	
		            	while (confirm != 'y') {
								listcars();
							};
		            	break;
		            case 4: 
		            	cout << "hyundaideets" << endl;
		            	while (confirm != 'y') {
								listcars();
							};		            	
		            	break;
		            case 5: 
		            	cout << "mazdadeets" << endl;
		            	while (confirm != 'y') {
								listcars();
							};
		            	break;
		            default:
		            	cout << "kthnxbye";
		            	break; 
						
						
						cout << "Are you sure this is what you want? (y/n)"; //for confirmation
		            	cin >> confirm;
		            	
					while (confirm != 'y' || confirm == 'n') {
						listcars();
					}
					
					} //closing switch case
		            	      	
		            break; //case 1 of carchoice break
			
        default:
        
            cout << "ok";
    
    
    }
    cout << endl;
}
    
 /*   cout << "Input your choice of car: ";
    cin >> 
    
    */


int main() {

	system("Color 0e");
    cout << "Account Number: ";
    getline(cin, accNum);
    cout << "Enter your name: ";
    getline(cin,  name);
    cout << "Enter your mobile number: ";
    cin >> mobileNumber;
    cout << "Enter your e-mail address: "; 
    cin >> email;
	

///////---------------- ANDI DITO YUNG UNANG LIST (SEATERS)-----------------
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
    calculate();
    invoice();
    
    
    //choices
    

}
