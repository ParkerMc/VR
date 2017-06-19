#include <iostream>
#include <cstdlib>
#include <QApplication>

#include "mainwindow.h"
#include "PracticalSocket.h"

int main(int argc, char *argv[]){
    /*
    UDPSocket sock(8888);
    char echoBuffer[255];         // Buffer for echo string
    int recvMsgSize;                  // Size of received message
    string sourceAddress;             // Address of datagram source
    unsigned short sourcePort;        // Port of datagram source
    // Block until receive message from a client
    recvMsgSize = sock.recvFrom(echoBuffer, sizeof(echoBuffer), sourceAddress,
                                sourcePort);

    cout << "Received packet from " << sourceAddress << ":"
         << sourcePort << endl;
    cout << echoBuffer << endl;

    sock.sendTo(echoBuffer, recvMsgSize, sourceAddress, sourcePort);*/
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
