#include <iostream>
#include <string>
using namespace std;

class Application{
    public:
        Application();
        void display() const;
        void updateCompany();
        void updateRole();
        void updateLocation();
        void updateStatus();
        void updateDate();
        void updateNotes();

    private:
        string company;
        string role;
        string location;
        string status;
        string date_applied;
        string notes;
};

Application::Application(){
    company = "Unkown Company";
    role = "Unkown Role";
    location = "TBD";
    status = "Not Applied";
    date_applied = "N/A";
    notes = "No notes";
};

void Application::display() const{
    cout << company;
    cout << role;
    cout << location;
    cout << status;
    cout << date_applied;
    cout << notes;
};