#include <time.h>
#include <cstdlib>
#include "application.h"

int main(int argc, char* argv[])
{
    srand(time(nullptr));

    int width = 640;
    int height = 480;

    application app;
    app.init(argc, argv, width, height);
    app.run();
}
