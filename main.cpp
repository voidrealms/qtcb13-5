#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

// STD Way in depth

bool doDivision(int max) {

    try {
        int value;
        qInfo() << "Enter a number";
        cin >> value;

        if(value == 0 || value == NULL) throw std::invalid_argument( "Can not divide by zero!");
        if(value > 5) throw std::out_of_range( "Should be less than 5");


        int result = max / value;
        qInfo() << "Result = " << result;

        return true;
    } catch (std::exception &e ) {
        qWarning() << e.what();
        return false;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = 44;
    do {
        // Do something here
    } while(doDivision(max));

    return a.exec();
}
