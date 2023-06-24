//Libaries
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

//Namespace
using namespace std;

//Global Variables
bool running = true;

//Main Function
int main()
{
    //Create Vector of Solar Product Types
    vector<string> solarProducts;
    solarProducts.push_back("Solar Panels");
    solarProducts.push_back("Battery Storage Systems");
    solarProducts.push_back("Inverters");
    solarProducts.push_back("Charge Controllers");
    solarProducts.push_back("Mounting Systems");

    //Print Welcome Message
    cout << "Welcome to Solar Power Solutions - Retailers and Sustainability Consultants\n";

    //Main Loop
    while(running)
    {
        //Print Menu
        cout << "\nPlease select an option:\n"
             << "1. View our Solar Solutions\n"
             << "2. Get a Quote\n"
             << "3. About Us\n"
             << "4. Contact\n"
             << "5. Quit\n";

        //Read Input and Choose Option
        int option;
        cin >> option;

        switch(option)
        {
            //View Solar Solutions
            case 1:
                cout << "\nHere is a list of Solar Products we offer:\n";
                for (int i = 0; i < solarProducts.size(); i++)
                {
                    cout << i+1 << ". " << solarProducts[i] << endl;
                }
                break;

            //Get a Quote
            case 2:
                cout << "\nTo get a quote for one of our solar products, please contact us.\n";
                break;

            //About Us
            case 3:
                cout << "\nSolar Power Solutions is a family owned business operating since 2011. We specialize in the sale of solar equipment, as well as sustainability consulting services.\n";
                break;

            //Contact
            case 4:
                cout << "\nPhone Number: 555-555-5555\n"
                     << "Email Address: info@solarpowersolutions.com\n"
                     << "Address: 123 Sesame Street, Anytown, CA 90210\n";
                break;

            //Quit
            case 5:
                running = false;
                break;

            //Error
            default:
                cout << "\nInvalid Option. Please try again.\n";
                break;
        }
    }

    //Print Goodbye Message
    cout << "\nThank you for visiting Solar Power Solutions. Goodbye!\n";

    return 0;
}