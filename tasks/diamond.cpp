#include <iostream>
#include <string>
using namespace std;

class DiamondCompany {
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    // Parameterized Constructor
    DiamondCompany(int id, string name, int staff, double revenue, int importDiamonds, int exportDiamonds, string ceo) {
        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamonds = importDiamonds;
        comp_export_diamonds = exportDiamonds;
        comp_ceo = ceo;
    }

    // Function to display company details
    void displayCompanyDetails() {
        cout << "--------------------------------------" << endl;
        cout << "Company ID: " << comp_id << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Staff Quantity: " << comp_staff_quantity << endl;
        cout << "Revenue: $" << comp_revenue << " per year" << endl;
        cout << "Raw Diamonds Imported: " << comp_import_raw_diamonds << " per year" << endl;
        cout << "Diamonds Exported: " << comp_export_diamonds << " per year" << endl;
        cout << "CEO: " << comp_ceo << endl;
        cout << "--------------------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of diamond companies: ";
    cin >> n;

    DiamondCompany *companies[n];

    for (int i = 0; i < n; i++) {
        int id, staff, importDiamonds, exportDiamonds;
        double revenue;
        string name, ceo;

        cout << "Enter details for company " << i + 1 << ":" << endl;
        cout << "Company ID: ";
        cin >> id;
        cin.ignore();
        cout << "Company Name: ";
        getline(cin, name);
        cout << "Staff Quantity: ";
        cin >> staff;
        cout << "Revenue (per year): ";
        cin >> revenue;
        cout << "Raw Diamonds Imported (per year): ";
        cin >> importDiamonds;
        cout << "Diamonds Exported (per year): ";
        cin >> exportDiamonds;
        cin.ignore();
        cout << "CEO Name: ";
        getline(cin, ceo);

        companies[i] = new DiamondCompany(id, name, staff, revenue, importDiamonds, exportDiamonds, ceo);
    }

    cout << "\nDiamond Companies Information:\n";
    for (int i = 0; i < n; i++) {
        companies[i]->displayCompanyDetails();
        delete companies[i]; // Free allocated memory
    }

    return 0;
}
