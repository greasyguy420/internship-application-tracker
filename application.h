#include <iostream>
#include <string>
using namespace std;

class Application{
    public:
        Application();
        void display() const;
        void updateCompany(const string& newCompany);
        void updateRole(const string& newRole);
        void updateLocation(const string& newLocation);
        void updateStatus(const string& newStatus);
        void updateDate(const string& newDate);
        void updateNotes(const string& newNotes);

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

void Application::updateCompany(const string& newCompany){
    company = newCompany;
};

void Application::updateRole(const string& newRole){
    role = newRole;
};

void Application::updateLocation(const string& newLocation){
    location = newLocation;
};

void Application::updateStatus(const string& newStatus){
    status = newStatus;
};

void Application::updateDate(const string& newDate){
    date_applied = newDate;
};

void Application::updateNotes(const string& newNotes){
    notes = newNotes;
};