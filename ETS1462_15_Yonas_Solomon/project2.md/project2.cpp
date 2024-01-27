#include <iostream>
using namespace std;
int main(){
    // Take the height
    // Note: if (the height goes >= 20 the shape may be distorted cuz, the numbers become two digits
    // and you can fix it if you want using modulo operation

    // Take the height
    int h;
    cout<<"Enter the height:";
    cin >> h;
    if(h < 1){
      cout<<"error: height must be greater than or equal to 1."<<endl;
      return 0;
    }
    if(h%2 ==0)
        ++h;
    int count = 0;
    for (int i = 0; i < h; ++i){
        for (int j = 0; j < h; ++j){
            if((i >= j && i + j < h) || (i + j >= h-1 && j >= i && j != i/2)){
                if ((i >= j && i + j < h)){
                    if(i <=h/2)
                        cout << i - j << "  ";
                    else
                        cout << h - i - j -1 << "  ";
                } else {
                    if(i <= h/2)
                        cout << abs(h - j - i - 1)<< "  ";
                    else
                        cout << j - i << "  ";
                }
            }
            else
                cout << "   ";
        }
        cout << endl;
    }
    return 0;
}
