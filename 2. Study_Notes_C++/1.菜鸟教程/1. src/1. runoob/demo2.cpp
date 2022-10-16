#include <iostream>
#include <limits>

using namespace std;// 通知编译器使用std命名空间
int main(void)
{
    cout << "type: \t\t" << "***********size************" << endl;

    cout << "bool: \t\t" << "SIZE IS :" << sizeof(bool);
    cout << "\tMAX: "    << (numeric_limits<bool>:: max());
    cout << "\t\tMIN: "  << (numeric_limits<bool>:: min()) << endl;

    cout << "char: \t\t" << "SIZE IS :" << sizeof(char);
    cout << "\tMAX: "    << (numeric_limits<char>:: max());
    cout << "\t\tMIN: "  << (numeric_limits<char>:: min()) << endl;   
   
    cout << "signed char: \t\t" << "SIZE IS :" << sizeof(signed char);
    cout << "\tMAX: "           << (numeric_limits<signed char>:: max());
    cout << "\t\tMIN: "         << (numeric_limits<signed char>:: min()) << endl;  

    cout << "unsigned char: \t\t" << "SIZE IS :" << sizeof(unsigned char);
    cout << "\tMAX: "             << (numeric_limits<unsigned char>:: max());
    cout << "\t\tMIN: "           << (numeric_limits<unsigned char>:: min()) << endl; 

    cout << "wchar_t: \t\t" << "SIZE IS :" << sizeof(wchar_t);
    cout << "\tMAX: "       << (numeric_limits<wchar_t>:: max());
    cout << "\t\tMIN: "     << (numeric_limits<wchar_t>:: min()) << endl; 

    cout << "short: \t\t" << "SIZE IS :" << sizeof(short);
    cout << "\tMAX: "     << (numeric_limits<short>:: max());
    cout << "\t\tMIN: "   << (numeric_limits<short>:: min()) << endl; 
  
    cout << "int: \t\t" << "SIZE IS :" << sizeof(int);
    cout << "\tMAX: "   << (numeric_limits<int>:: max());
    cout << "\t\tMIN: " << (numeric_limits<int>:: min()) << endl; 

    cout << "unsigned: \t\t" << "SIZE IS :" << sizeof(unsigned);
    cout << "\tMAX: "        << (numeric_limits<unsigned>:: max());
    cout << "\t\tMIN: "      << (numeric_limits<unsigned>:: min()) << endl; 

    cout << "long: \t\t" << "SIZE IS :" << sizeof(long);
    cout << "\tMAX: "    << (numeric_limits<long>:: max());
    cout << "\t\tMIN: "  << (numeric_limits<long>:: min()) << endl; 

    cout << "unsigned long: \t\t" << "SIZE IS :" << sizeof(unsigned long);
    cout << "\tMAX: "             << (numeric_limits<unsigned long>:: max());
    cout << "\t\tMIN: "           << (numeric_limits<unsigned long>:: min()) << endl; 

    cout << "double: \t\t" << "SIZE IS :" << sizeof(double);
    cout << "\tMAX: "      << (numeric_limits<double>:: max());
    cout << "\t\tMIN: "    << (numeric_limits<double>:: min()) << endl; 

    cout << "long double: \t\t" << "SIZE IS :" << sizeof(long double);
    cout << "\tMAX: "           << (numeric_limits<long double>:: max());
    cout << "\t\tMIN: "         << (numeric_limits<long double>:: min()) << endl; 

    cout << "float: \t\t" << "SIZE IS :" << sizeof(float);
    cout << "\tMAX: "     << (numeric_limits<float>:: max());
    cout << "\t\tMIN: "   << (numeric_limits<float>:: min()) << endl; 

    cout << "size_t: \t\t" << "SIZE IS :" << sizeof(size_t);
    cout << "\tMAX: "      << (numeric_limits<size_t>:: max());
    cout << "\t\tMIN: "    << (numeric_limits<size_t>:: min()) << endl; 

    cout << "string: \t\t" << "SIZE IS :" << sizeof(string) << endl;
   
    cout << "type:\t\t" <<"**************size*************" << endl;
    
    system("pause");
    return 0;
}