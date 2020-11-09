#include <iostream>
#include <bitset> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a, b;
	
	cout << "b: "; cin>>a;
	cout << "a: "; cin>>b;

	cout << "a^b= " << bitset<8>(a^b)<<" "<<(a^b)<<endl;
    cout << "a|b= " << bitset<8>(a|b)<<" "<<(a|b)<<endl;
    cout << "a&b= " << bitset<8>(a&b)<<" "<<(a&b)<<endl;
    cout << "~a= "  << bitset<8>(~a)<<" "<<(~a)<<endl;
    cout << "~b= "  << bitset<8>(~b)<<" "<<(~b)<<endl;
    cout << "a<<=1 "<< bitset<8>(a<<=1)<<" "<<(a<<=1)<<endl;
    cout << "b>>=1 "<< bitset<8>(b>>=1)<<" "<<(b>>=1)<<endl;
    
    
	return 0;
}
