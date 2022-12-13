#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

string fullname(string fname, string lname){
    return fname + " " + lname;
}

int main() {

    int a = 1;
    int b = 2;
    int c = a;
    a = b;
    b = c;
    cout << a << endl << b << endl;

    //simple print sth program
    double sales = 95000;
    const double salestaxrate = 0.04;
    cout << "sales = $" << sales << endl;
    cout << "sales tax = $" << sales * salestaxrate << endl;

    // simple input radius output area program
//    cout << "Enter radius: ";
//    int radius = 0;
//    cin >> radius;
//    const double pi = 3.14;
//    cout << endl << "the area is " << pi * pow(radius,2);

    double price;
    auto interestrate = 3.67F;
    auto filesize = 90000L;
    char letter = 'a';
    bool isvalid = true;

    srand(time(0));
    const int max_val = 6;
    const int min_val = 1;
    int firstroll = (rand() % (max_val - min_val + min_val)) + min_val;
    int secondroll = (rand() % (max_val - min_val + min_val)) + min_val;
    cout << endl << firstroll << ", " << secondroll << endl;

    cout << fullname("alex", "luthor");
    return 0;
}

