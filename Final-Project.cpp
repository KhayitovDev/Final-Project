#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
using namespace std;

int glob = 0;
int global = 10;
int suvglobal = 10;

int login()
{
    string pass = "";
    char ch;
    cout << "\n\n\n\n\n\n\n\t\t\t\t\t-----------------------------------------------------------";

    cout << "\n\n\n\n\n\n\n\t\t\t\t\tCar Rental System Login";
    cout << "\n\n\n\n\n\n\n\t\t\t\t\t-----------------------------------------------------------";

    cout << "\n\n\n\n\n\n\n\t\t\t\t\tEnter Correct Password to login: ";

    ch = _getch();
    while (ch != 13)
    {
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if (pass == "pass")
    {
        cout << "\n\n\n\n\t\t\t\t\tPassword Match Succesfully!!\n\n";
        system("PAUSE");
        system("CLS");
    }
    else
    {
        cout << "\n\n\n\n\t\t\t\t\tPassword Did Not Match.Please Try again!!\n";
        system("PAUSE");
        system("CLS");
        login();
    }
    return 0;
}

class e_booking
{
protected:
    int pnr;
    int choice, carChoice;

public:
    void d_pnr()
    {
        glob++;
        pnr = glob;
    }
    int indetails()
    {
        cout << "\n\t\ ||||| Following electric cars are available: ||||| " << endl
            << endl;
        cout << "\n\t\1.Tesla(1) " << endl;
        cout << "\n\t\2.Hundai(2) " << endl;
        cout << "\n\t\3.Volkswagen(3) " << endl;
        cout << "\n\t\4.Enter your choice: ";
        cin >> carChoice;
        if (carChoice == 1)
        {
            cout << "\n\t\ ||||| Following models of Tesla are available: |||||" << endl
                << endl;

            cout << "\n\t\1.Tesla Model X(1)\t\n";
            cout << "\n\t\2.Tesla Model S(2)\t\n";
            cout << "\n\t\3.Tesla Model 3(3)\t\n";
        }
        else if (carChoice == 2)
        {
            cout << "\n\t\ ||||| Following models of Hyundai are available: |||||" << endl
                << endl;
            cout << "\n\t\4.Hyundai IONIQ(4)\t\n";
            cout << "\n\t\5.Hyundai KONA(5)\t\n";
        }
        else if (carChoice == 3)
        {
            cout << "\n\t\||||| Following models of Volkswagen are available: |||||" << endl
                << endl;
            cout << "\n\t\6.Volkswagen VW ID.4(6)\t\n";
            cout << "\n\t\7.Volkswagen VW ID.6(7)\t\n";
        }
        else
        {
            cout << "\n\t\Wrong input entered\nTry again\n\n\n"
                << endl;
            return indetails();
        }
    }
    int selectCar()
    {
        cout << "\n\tEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n\t\You've selected Tesla Model X" << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 6" << endl;
            cout << "\n\t\Max speed: 210 mp/h " << endl;
            cout << "\n\t\Price per mile: $3.5 " << endl;
            break;
        case 2:
            cout << "\n\t\You've selected Tesla Model S" << endl;
            cout << "\n\t\Color: White " << endl;
            cout << "\n\t\Seat capacity: 4" << endl;
            cout << "\n\t\Max speed: 261 mp/h " << endl;
            cout << "\n\t\Price per mile: $4.0 " << endl;
            break;
        case 3:
            cout << "\n\t\You've selected Tesla Model 3" << endl;
            cout << "\n\t\Color: Red " << endl;
            cout << "\n\t\Seat capacity: 4" << endl;
            cout << "\n\t\Max speed: 162 mp/h " << endl;
            cout << "\n\t\Price per mile: $2.5 " << endl;
            break;
        case 4:
            cout << "\n\t\You've selected Hyundai IONIQ" << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 6" << endl;
            cout << "\n\t\Max speed: 210 mp/h " << endl;
            cout << "\n\t\Price per mile: $1.5 " << endl;
            break;
        case 5:
            cout << "\n\t\You've selected Hyundai KONA" << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 6" << endl;
            cout << "\n\t\Max speed: 210 mp/h " << endl;
            cout << "\n\t\Price per mile: $1.5 " << endl;
            break;
        case 6:
            cout << "\n\t\You've selected Volkswagen 1" << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 7" << endl;
            cout << "\n\t\Max speed: 210 mp/h " << endl;
            cout << "\n\t\Price per mile: $1.5 " << endl;
            break;
        case 7:
            cout << "\n\t\You've selected Volkswagen 2" << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 6" << endl;
            cout << "\n\t\Max speed: 210 mp/h " << endl;
            cout << "\n\t\Price per mile: $1.5 " << endl;
            break;
        default:
            cout << "\n\t\Wrong input entered.\nTry again" << endl;
            return selectCar();
        }
    }
};

class sportCar
{
protected:
    int pnr1;
    int Spcarchoice, sportCars;

public:
    void a_pnr()
    {
        global++;
        pnr1 = global;
    }
    int sportCarDetails()
    {
        cout << "\n\t\||||| Following Sport cars are available: ||||| " << endl
            << endl;
        cout << "\n\t\1.Ferrari(1) " << endl;
        cout << "\n\t\2.Lamborghini(2) " << endl;
        cout << "\n\t\3.Porsche(3) " << endl;
        cout << "\n\t\4.Enter your choice: ";
        cin >> sportCars;
        cout<< endl;
        if (sportCars == 1)
        {
            cout << "\n\t\||||| Following models of Ferrari are available: |||||" << endl
                << endl;

            cout << "\n\t\1.Ferrari 488 Pista Spider (1)\t\n";
            cout << "\n\t\2.Ferrari 488 Pista (2)\t\n";
        }
        else if (sportCars == 2)
        {
            cout << "\n\t\ ||||| Following models of Lamborghini are available: |||||" << endl
                << endl;
            cout << "\n\t\3.Lamborghini Aventador SVJ (3)\t\n";
            cout << "\n\t\4.Lamborghini Aventador(4)\t\n";
            cout << "\n\t\5.Lamborghini Huracan(5)\t\n";
        }
        else if (sportCars == 3)
        {
            cout << "\t ||||| Following models of Porsche are available: |||||" << endl
                << endl;
            cout << "\n\t\6.Porsche 718 Cayman T (6)\t\n";
            cout << "\n\t\7.Porsche 911 Carrera  (7)\t\n";
        }
        else
        {
            cout << "\n\t\Wrong input entered\nTry again\n\n\n"
                << endl;
            return sportCarDetails();
        }
    }
    int selectSportCar()
    {
        cout << "\n\t\Enter your choice: ";
        cin >> Spcarchoice;
        switch (Spcarchoice)
        {
        case 1:
            cout << "\n\t\You've selected Ferrari 488 Pista Spider" << endl;
            cout << "\n\t\Color: Red " << endl;
            cout << "\n\t\Seat capacity: 2" << endl;
            cout << "\n\t\HorsePower: 770 " << endl;
            cout << "\n\t\Price per mile: $25.0 " << endl;
            break;
        case 2:
            cout << "\n\t\You've selected Ferrari 488 Pista" << endl;
            cout << "\n\t\Color: Yellow " << endl;
            cout << "\n\t\Seat capacity: 2" << endl;
            cout << "\n\t\HorsePower: 770 " << endl;
            cout << "\n\t\Price per mile: $20.0 " << endl;
            break;
        case 3:
            cout << "\n\t\You've selected Lamborghini Aventador SVJ" << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 2" << endl;
            cout << "\n\t\HorsePower: 770 " << endl;
            cout << "\n\t\Price per mile: $35.0 " << endl;
            break;
        case 4:
            cout << "\n\t\You've selected Lamborghini Aventador" << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 2" << endl;
            cout << "\n\t\HorsePower: 769 " << endl;
            cout << "\n\t\Price per mile: $28.0 " << endl;
            break;
        case 5:
            cout << "\n\t\You've selected Lamborghini Huracan" << endl;
            cout << "\n\t\Color: white " << endl;
            cout << "\n\t\Seat capacity: 2" << endl;
            cout << "\n\t\HorsePower: 630 " << endl;
            cout << "\n\t\Price per mile: $15.0 " << endl;
            break;
        case 6:
            cout << "\n\t\You've selected Porsche 718 Cayman T" << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 2" << endl;
            cout << "\n\t\HorsePower: 300 " << endl;
            cout << "\n\t\Price per mile: $12.0 " << endl;
            break;
        case 7:
            cout << "\n\t\You've selected Porsche 911 Carrera " << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 2" << endl;
            cout << "\n\t\HorsePower: 300 " << endl;
            cout << "\n\t\Price per mile: $24.0 " << endl;
            break;
        default:
            cout << "\n\t\Wrong input entered.\nTry again" << endl;
            return selectSportCar();
        }
    }
};

class SUVcars
{
protected:
    int suvcars;
    int Schoice, suvchoice;

public:
    void b_pnr()
    {
        suvglobal++;
        suvcars = suvglobal;
    }
    int suvcardetails()
    {
        cout << "\n\t ||||| Following SUV cars are available: ||||| " << endl
            << endl;
        cout << "\n\t\1.Range Rover(1) " << endl;
        cout << "\n\t\2.Tracker(2) " << endl;
        cout << "\n\t\3.Captiva(3) " << endl;
        cout << "\n\t\  Enter your choice: ";
        cin >> suvchoice;
        if (suvchoice == 1)
        {
            cout << "\n\t ||||| Following models of Range Rover are available: |||||" << endl
                << endl;

            cout << "\n\t\1.RANGE ROVER EVOQUE(1)\t\n";
            cout << "\n\t\2.RANGE ROVER VELAR(2)\t\n";
        }
        else if (suvchoice == 2)
        {
            cout << "\n\t ||||| Following models of Tracker are available: |||||" << endl
                << endl;
            cout << "\n\t\3.Tracker-1(3)\t\n";
            cout << "\n\t\4.Tracker-2(4)\t\n";
        }
        else if (suvchoice == 3)
        {
            cout << "\n\t ||||| Following models of Porsche are available: |||||" << endl
                << endl;
            cout << "\n\t\5.Captiva Two(5)\t\n";
            cout << "\n\t\6.Captiva Three (6)\t\n";
            cout << "\n\t\7.Captiva-5 (7)\t\n";
        }
        else
        {
            cout << "\n\t\Wrong input entered\nTry again\n\n\n"
                << endl;
            return suvcardetails();
        }
    }
    int selectSuv()
    {
        cout << "\n\t\Enter your choice: ";
        cin >> Schoice;
        switch (Schoice)
        {
        case 1:
            cout << "\n\t\You've selected RANGE ROVER EVOQUE" << endl;
            cout << "\n\t\Color: Red " << endl;
            cout << "\n\t\Seat capacity: 4" << endl;
            cout << "\n\t\Max speed: 211 mp/h " << endl;
            cout << "\n\t\Price per mile: $25.0 " << endl;
            break;
        case 2:
            cout << "\n\t\You've selected RANGE ROVER VELAR" << endl;
            cout << "\n\t\Color: Yellow " << endl;
            cout << "\n\t\Seat capacity: 4" << endl;
            cout << "\n\t\HorsePower: 770 " << endl;
            cout << "\n\t\Price per mile: $20.0 " << endl;
            break;
        case 3:
            cout << "\n\t\You've selected Tracker-1" << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 4" << endl;
            cout << "\n\t\HorsePower: 770 " << endl;
            cout << "\n\t\Price per mile: $35.0 " << endl;
            break;
        case 4:
            cout << "\n\t\You've selected Tracker-2" << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 4" << endl;
            cout << "\n\t\HorsePower: 769 " << endl;
            cout << "\n\t\Price per mile: $28.0 " << endl;
            break;
        case 5:
            cout << "\n\t\You've selected Captiva-2" << endl;
            cout << "\n\t\Color: white " << endl;
            cout << "\n\t\Seat capacity: 4" << endl;
            cout << "\n\t\HorsePower: 630 " << endl;
            cout << "\n\t\Price per mile: $15.0 " << endl;
            break;
        case 6:
            cout << "\n\t\You've selected Captiva-3" << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 4" << endl;
            cout << "\n\t\HorsePower: 300 " << endl;
            cout << "\n\t\Price per mile: $12.0 " << endl;
            break;
        case 7:
            cout << "\n\t\You've selected Captiva-4 " << endl;
            cout << "\n\t\Color: Black " << endl;
            cout << "\n\t\Seat capacity: 4" << endl;
            cout << "\n\t\HorsePower: 300 " << endl;
            cout << "\n\t\Price per mile: $24.0 " << endl;
            break;
        default:
            cout << "Wrong input entered.\nTry again" << endl;
            return selectSuv();
        }
    }
};

class Customer
{
public:
    char f_name[20], l_name[20], email[40];
    int age;
    int numdays;

    void setCustomer()
    {
        cout << "\n\t\||||<>||| Customer details ||||<>|||" << endl;
        cout << "\n\t\Enter First Name: ";
        cin >> f_name;
        cout << "\n\t\Enter Last Name: ";
        cin >> l_name;
        cout << "\n\t\Enter Email Address: ";
        cin >> email;
        cout << "\n\t\Enter age: ";
        cin >> age;
        cout << "\n\t\How many days do you want to rent? : ";
        cin >> numdays;
        system("CLS");
    }
    void displayCustomer()
    {
        cout << "\n\t\First Name: " << f_name << endl;
        cout << "\n\t\Last  Name: " << l_name << endl;
        cout << "\n\t\Email : " << email << endl;
        cout << "\n\t\Age: " << age << endl;
        cout << "\n\t\Number of days: " << numdays << endl;
        cout << "\n\t\Thank you! Your records have been saved! " <<endl;
    }
    void saveCustomerData()
    {
        ofstream cust;
        cust.open("customer.txt", ios::app);
        cust.write((char*)this, sizeof(*this));
        cust.close();
    }
};

class TestDrive
{
public:
    char fname[20], lastName[20], date[25];
    int age;
    int choice;
    void tdrive()
    {
        cout << "\n\t\Enter First Name: ";
        cin >> fname;
        cout << "\n\t\Enter Last Name: ";
        cin >> lastName;
        cout << "\n\t\Enter age: ";
        cin >> age;
        cout << "\n\t\Enter Date/Month/Year: ";
        cin >> date;
        cout << "\n\t\Available car options for Test Drive: ";
        cout << "\n\t\1.Tesla Model X: ";
        cout << "\n\t\2.Tesla Model S: ";
        cout << "\n\t\3.Ferrari 488 Pista: ";
        cout << "\n\t\4.Lamborghini Huracan: ";
        cout << "\n\t\5.Porsche 911 Carrera: ";
        cout << "\n\t\Enter your choice: ";
        cin >> choice;
        system("CLS");
    }
    void dispTdrive()
    {
        cout << "\n\t\First Name: " << fname << endl;
        cout << "\n\t\Last  Name: " << lastName << endl;
        cout << "\n\t\Age: " << age << endl;
        cout << "\n\t\Registered for-: " << date << endl;
        cout << "\n\t\Your choice is: " << choice << endl;
        cout << "\n\t\Thank you, your data recorded: " << endl;
    }
    void savetdrive()
    {
        ofstream test;
        test.open("testDrive.txt", ios::app);
        test.write((char*)this, sizeof(*this));
        test.close();
    }
};

class DetailedInfo
{
public:
    void electric()
    {
        cout << "\n\t\ _____________________________________________________________________________________________________________";
        cout << "\n\t\ 1) |Tesla Model X|\t|from 0-60mph in 3.8 seconds|\t|Battery Capacity: 100.0kWh|\t|RANGE-351 miles|\n";
        cout << "\n\t\ 2) |Tesla Model 3|\t|from 0-60mph in 3.8 seconds|\t|Battery Capacity: 100.0kWh|\t|RANGE-220 miles|\n";
        cout << "\n\t\ 3) |Tesla Model S|\t|from 0-60mph in 3.8 seconds|\t|Battery Capacity: 100.0kWh|\t|RANGE-405 miles|\n";
        cout << "\n\t\ 4) |Tesla Model Y|\t|available next month       |\t ";
        cout << "\n\t\ _____________________________________________________________________________________________________________";
        cout << "\n\t\ 5) |Hyundai IONIQ|\t|from 0-60mph in 9.8 seconds|\t|Battery Capacity: 100.0kWh|\t|RANGE-194 miles|\n";
        cout << "\n\t\ 6) |Hyundai KONA |\t|from 0-60mph in 5.5 seconds|\t|Battery Capacity: 100.0kWh|\t|RANGE-189 miles|\n";
        cout << "\n\t\ _____________________________________________________________________________________________________________";
        cout << "\n\t\ 7) |Volkswagen VW ID.4|\t|from 0-60mph in 5.5 seconds|\t|Battery Capacity: 100.0kWh|\t|RANGE-280 miles|\n";
        cout << "\n\t\ 8) |Volkswagen VW ID.6|\t|from 0-60mph in 5.5 seconds|\t|Battery Capacity: 100.0kWh|\t|RANGE-271 miles|\n";
        cout << "\n\t\ _____________________________________________________________________________________________________________";
    }
    void sportdetails()
    {
        cout << "\n\t\ _____________________________________________________________________________________________________________";
        cout << "\n\t\ 1) |Ferrari 488 Pista Spider|\t|from 0-60mph in 2.8 seconds|\t|Top-speed-340kph|\n";
        cout << "\n\t\ 2) |Ferrari 488 Pista       |\t|from 0-60mph in 2.7 seconds|\t|Top-speed-211mph|\n";
        cout << "\n\t\ _____________________________________________________________________________________________________________";
        cout << "\n\t\ 3) |Lamborghini AventadorSVJ|\t|from 0-60mph in 2.8 seconds|\t|Top-speed-350kph|\n";
        cout << "\n\t\ 4) |Lamborghini Aventador   |\t|from 0-60mph in 2.9 seconds|\t|Top-speed-350kph|\n";
        cout << "\n\t\ 5) |Lamborghini Huracan     |\t|from 0-60mph in 3.4 seconds|\t|Top-speed-323kph|\n";
        cout << "\n\t\ _____________________________________________________________________________________________________________";
        cout << "\n\t\ 6) |Porsche 718 Cayman T    |\t|from 0-60mph in 4.9 seconds|\t|Top-speed-170kph|\n";
        cout << "\n\t\ 7) |Porsche 911 Carrera     |\t|from 0-60mph in 3.5 seconds|\t|Top-speed-191kph|\n";
        cout << "\n\t\ _____________________________________________________________________________________________________________";
    }
    void suvdetails()
    {
        cout << "\n\t\ _____________________________________________________________________________________________________________";
        cout << "\n\t\ 1) |RANGE ROVER EVOQUE|\t|from 0-60mph in 9.5 seconds|\t|Top-speed-206kph|\n";
        cout << "\n\t\ 2) |RANGE ROVER VELAR |\t|from 0-60mph in 4.3 seconds|\t|Top-speed-170mph|\n";
        cout << "\n\t\ _____________________________________________________________________________________________________________";
        cout << "\n\t\ 3) |Tracker-1         |\t|from 0-60mph in 6.8 seconds|\t|Top-speed-141kph|\n";
        cout << "\n\t\ 4) |Tracker-2         |\t|from 0-60mph in 5.7 seconds|\t|Top-speed-180kph|\n";
        cout << "\n\t\ _____________________________________________________________________________________________________________";
        cout << "\n\t\ 5) |Captiva-2         |\t|from 0-60mph in 8.6 seconds|\t|Top-speed-186kph|\n";
        cout << "\n\t\ 6) |Captiva-3         |\t|from 0-60mph in 8.2 seconds|\t|Top-speed-190kph|\n";
        cout << "\n\t\ 7) |Captiva-4         |\t|from 0-60mph in 7.5 seconds|\t|Top-speed-191kph|\n";
        cout << "\n\t\ _____________________________________________________________________________________________________________";
    }
};

int main()
{
    login();
    class e_booking e1;
    class sportCar sp1;
    class SUVcars suv;
    class Customer c;
    class DetailedInfo d1;
    class TestDrive td;
    int ch, ch1, Ch2, n;
    char input;

    do
    {

        system("CLS");
        cout << "\n\n \t\t\t\||||| ----WELCOME--- |||||" << endl
            << endl;
        cout << "\t  |__________________________________________________________|\n";
        cout << "\t   Rent best cars with X-Rental!" << endl;
        cout << "\t  |__________________________________________________________|";


        cout << "\n\t\1 Rent car";
        cout << "\n\t\2 Register For Test-Drive";
        cout << "\n\t\3 Specific details";
        cout << "\n\t\4 Exit ";
        cout << "\n\t\  Please enter your choice: ";
        cin >> ch;
        switch (ch)
        {

        case 1:
            system("CLS");
            cout << "\n\t\1.Electric cars(1)";
            cout << "\n\t\2.Sport cars(2)";
            cout << "\n\t\3.SUV cars(3)";
            cout << "\n\t\  Please enter your option: ";
            cin >> ch1;
            switch (ch1)
            {
            case 1:
                e1.d_pnr();
                e1.indetails();
                e1.selectCar();
                c.setCustomer();
                c.displayCustomer();
                c.saveCustomerData();
                break;
            case 2:
                sp1.a_pnr();
                sp1.sportCarDetails();
                sp1.selectSportCar();
                c.setCustomer();
                c.displayCustomer();
                c.saveCustomerData();
                break;
            case 3:
                suv.b_pnr();
                suv.suvcardetails();
                suv.selectSuv();
                c.setCustomer();
                c.displayCustomer();
                c.saveCustomerData();
                break;
            default:
                cout << "Wrong input entered\nTry again\n\n\n"
                    << endl;
                return main();
            }
            break;

        case 2:
            system("CLS");
            cout << "\n\t\||| Register for Test-Drive |||";
            td.tdrive();
            td.dispTdrive();
            td.savetdrive();

            break;
        case 3:
            system("CLS");
            cout << "\n\t\||| GET DETAILED INFORMATION ABOUT CARS |||";
            cout << "\n\t\1.Electric cars(1)";
            cout << "\n\t\2.Sport cars(2)";
            cout << "\n\t\3.SUV cars(3)";
            cout << "\n\t\4.Enter your choice: ";
            cin >> Ch2;
            switch (Ch2)
            {
            case 1:
                d1.electric();
                break;
            case 2:
                d1.sportdetails();
                break;
            case 3:
                d1.suvdetails();
                break;
            }

            break;
        case 4:
            return 0;
            break;
        }

        cout << "\n\n\nDo you wish to continue:(y/Y)" << endl;
        cin >> input;
    } while (input == 'Y' || input == 'y');
    return 0;
}