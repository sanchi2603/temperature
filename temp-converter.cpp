#include <iostream>
using namespace std;
int main(){
    double temp;
    char unit ;
    cout <<" ************** TEMPERATURE CONVERTER ***************** \n" 
    << " F = fahreheit \n" << "C = celsius \n" 
    << " what unit you would like to convert :";
    cin >> unit ;
while(unit== 'F' || unit == 'f' || unit == 'c' || unit== 'C'){
    if (unit == 'F' || unit == 'f') {
cout << " enter the temperature in celcius ";
cin >> temp ;

temp = (1.8 * temp ) + 32.0;

cout << "temp in F:" << temp <<'\n' ;
    }

    else if (unit == 'C' || unit == 'c') {
        cout << " enter the temperature in farenheit ";
cin >> temp ;

temp = (temp - 32) /1.8 ;
cout << "temp in C: " << temp  <<'\n';}

else {
    cout << "enter valid: "; 
}
}
return 0;

}
