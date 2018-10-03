#include <iostream>
using namespace std;

int main()
{
    int height;
    int width;
    int i, x;
    
    cout << "Enter height: ";
    cin >> height;
    
    cout << "Enter width: " ;
    cin >> width ;
    
    cout << endl;
    
    char asterisk = '*';
    
    for (i = 0 ; i < width; i ++)
    
    {
        for (x = 0; x < height; x ++)
            
        {
            cout << asterisk;
        }
         
    }
    
    
    //cout << height << endl; 
    //cout << width << endl;

    return 0;
}
