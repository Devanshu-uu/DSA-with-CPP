#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

// MinGW workaround for misconfigured startup
extern "C" int WinMain(int argc, char *argv[], char *envp[], int ShowCmd) {
    return main();
}