#include <iostream>
#include <memory>

using namespace std;

struct connection;
struct destination;
connection connect(destination *);
void disconnect(connection);

void end_connection(connection *p) {
    disconnect(*p);
}

void f(destination *d) {
    connection c = connect(&d);
    shared_ptr<connection> sp(&c, end_connection);
}
