#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char **argv)
{
    string line;
    string max_line;
    int num;
    int max;

    cin >> num;
    max = num;

    while (getline(cin, line))
    {
        stringstream buf(line);
        buf >> num;

        if (num > max)
        {
            max = num;
            max_line = line;
        }
    }

    cout << max_line << endl;

    return 0;
}
