#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.
    int a1,a2,a3,a4,a5,a6;
    int r1,r2,r3;
    int b1,b2,b3,b4;
    int r4,r5;
    void addition();
    addition();
    void substaction();
    substaction();
    return a.exec();
}
void addition()
{
cout<<"insaid addition"<<endl;
    int a1=0;
    int a2=0;
    int a3=1;
    int a4=0;
    int a5=1;
    int a6=1;
    int r1;
    int r2;
    int r3;
    r1=a1+a2;
    r2=a3+a4;
    r3=a5+a6;
    cout<<"result of r1"<<r1<<endl;
    cout<<"result of r2"<<r2<<endl;
    cout<<"result of r3"<<r3<<endl;
}


void substaction()
{
    cout<<"insaid substaction"<<endl;
    int b1=1;
    int b2=1;
    int b3=1;
    int b4=2;
    int r4;
    int r5;
    r4=b1-b2;
    r5=b3-b4;
    cout<<"result of r4"<<r4<<endl;
    cout<<"result of r5"<<r5<<endl;

}
