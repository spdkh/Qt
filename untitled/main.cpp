#include <iostream>
#include <unistd.h>
#include <conio.h>

using namespace std;

int main()
{
    char key=0;
    while(1)
    {
        if(kbhit())
            key=getch();
        if(key == 'p')
        {
            cout << "\n...Enter...\n";
            sleep(1);
        }

            cout << "Hmmmmm.....\n";
            sleep(1);

    }
    return 0;
}
