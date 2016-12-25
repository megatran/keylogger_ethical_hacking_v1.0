#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    //solve console problem: hide keylogger windows and prevent it from popping
    MSG Msg;

    while(GetMessage (&Msg, NULL, 0, 0))
    {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    return 0;
}
