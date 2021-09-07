
#include <iostream>

union velerad {
    int alt;
    float ceig;
    char z;
};

struct vassal {
    velerad wadgern;
    unsigned int korol : 1;
    unsigned int i : 1;
    unsigned int shut : 1;
};

int main()
{
    using namespace std; 
    
    //задание 1
    short int h_var{ 123 };
    cout << h_var << endl;
    int b_var = 1'000'000;
    cout << b_var << endl;
    long long c_var = 1488228832454324323;
    cout << c_var << endl;
    char d_var = 'Q';
    cout << d_var << endl;
    bool e = true;
    e = false;
    cout << e << endl;
    float f_var = 2.05f;
    cout << f_var << endl;
    double g_var = 2e+78;
    cout << g_var << endl;
    cout << "panzefarf" << endl;
    //задание 2
    enum tictactoe { x, o, pustOta, };
    //задание 3
    tictactoe arrival_arr[9] = { pustOta, o, pustOta, o, x, pustOta, pustOta, pustOta, pustOta, };
    //задание 4
    struct field
    {

        tictactoe field_line1[3] = { pustOta, pustOta, pustOta, };
        tictactoe field_line2[3] = { pustOta, pustOta, pustOta, };
        tictactoe field_line3[3] = { pustOta, pustOta, pustOta, };
    };
    //задание 5
    vassal billy;
    billy.wadgern.alt = 'X';
    billy.i = 1;
    cout << billy.wadgern.alt << endl;
    cout << billy.wadgern.ceig << endl;
    cout << billy.wadgern.z << endl;

    return 0;
}