// Xander Reyes
// Lab-1 Jan 24
//
#include <iostream>
#include <random>
using namespace std;




int main(void)
{
    srand(time(NULL)); 
    int a = rand() % 10 +1 ;
    cout << a << endl;
    if (a <=5){
        cout << "LMK LMK\n";
    }
    else{
        cout << "Moshi Moshi\n";
    }
	// change during lab class

	int b = rand() % 10 +1; 

    cout << "a " << a << " b " << b << endl; // 2nd change
    
	if (a<=b)
	cout << "b is bigger than a\n";
	else
	cout << "b is less than a\n";



    return 0;
}

