#include "cpp-httplib-master/httplib.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    httplib::Server server;

    server.Post("/buttonClicked", [](const httplib::Request& req, httplib::Response& res) {
        res.set_content("Button was pressed", "text/plain");
        cout << "���� ������ ������" << endl;
        });

    server.set_base_dir("./");

    cout << "������ ������� �� ����� 8080" << endl;
    server.listen("localhost", 8080);

    return 0;
}