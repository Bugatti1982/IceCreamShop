#include <iostream>
#include <iomanip>
using namespace std;
double vanilla_cone_price = 1.50;
double chochlate_cone_price = 1.50;
double twist_cone_price = 1.75;
double vanilla_blizzard_price = 2.50;
double chochlate_blizzard_price = 2.50;
double twist_blizzard_price = 2.75;
double c_choice;
double b_choice;
double ctotal;
double btotal;
int choice;
char yes_no;
double c_and_b_totals;

double cone_choice(int csize, int cflavor, int cquantity) {
    cout << "Sizes: small = 1, medium = 2, large = 3" << endl;
    cout << "What size do you want?" << endl;
    cin >> csize;
    cout << "Flavors: vanilla = 1, choclate = 2, twist = 3" << endl;
    if (csize == 1) {
        cout << "What flavor do you want?" << endl;
        cin >> cflavor;
        if (cflavor == 1) {
            cout << "How many do you want?" << endl;
            cin >> cquantity;
            ctotal = (vanilla_cone_price - 1.00) * cquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the small vanilla cones are $" << ctotal << endl;
        }
        else if (cflavor == 2) {
            cout << "How many do you want?" << endl;
            cin >> cquantity;
            ctotal = (chochlate_cone_price - 1.00) * cquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the small chochlate cones are $" << ctotal << endl;
        }
        else if (cflavor == 3) {
            cout << "How many do you want?" << endl;
            cin >> cquantity;
            ctotal = (twist_cone_price - 1.00) * cquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the twist cones are $" << ctotal << endl;
        }
        else {
            cout << "You did not enter a valid number!" << endl;
        }
    }
    else if (csize == 2) {
        cout << "What flavor do you want?" << endl;
        cin >> cflavor;
        if (cflavor == 1) {
            cout << "How many do you want?" << endl;
            cin >> cquantity;
            ctotal = (vanilla_cone_price - 0.50) * cquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the medium vanilla cones are $" << ctotal << endl;
        }
        else if (cflavor == 2) {
            cout << "How many do you want?" << endl;
            cin >> cquantity;
            ctotal = (chochlate_cone_price - 0.50) * cquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the medium chochlate cones are $" << ctotal << endl;
        }
        else if (cflavor == 3) {
            cout << "How many do you want?" << endl;
            cin >> cquantity;
            ctotal = (twist_cone_price - 0.50) * cquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the medium twist cones are $" << ctotal << endl;
        }
        else {
            cout << "You did not enter a valid number!" << endl;
        }
    }
    else if (csize == 3) {
        cout << "What flavor do you want?" << endl;
        cin >> cflavor;
        if (cflavor == 1) {
            cout << "How many do you want?" << endl;
            cin >> cquantity;
            ctotal = vanilla_cone_price * cquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the large vanilla cones are $" << ctotal << endl;
        }
        else if (cflavor == 2) {
            cout << "How many do you want?" << endl;
            cin >> cquantity;
            ctotal = chochlate_cone_price * cquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the large chochlate cones are $" << ctotal << endl;
        }
        else if (cflavor == 3) {
            cout << "How many do you want?" << endl;
            cin >> cquantity;
            ctotal = twist_cone_price * cquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the large twist cones are $" << ctotal << endl;
        }
        else {
            cout << "You did not enter a valid number!" << endl;
        }
    }
    else {
        cout << "You did not enter a valid number!" << endl;
    }
return c_choice;
}



double blizzard_choice(int bsize, int bflavor, int bquantity) {
    cout << "Sizes: small = 1, medium = 2, large =3" << endl;
    cout << "What size do you want?" << endl;
    cin >> bsize;
    cout << "Flavors: vanilla = 1, chochlate = 2, twist = 3" << endl;
    if (bsize == 1) {
        cout << "What flavor do you want?" << endl;
        cin >> bflavor;
        if (bflavor == 1) {
            cout << "How many do you want?" << endl;
            cin >> bquantity;
            btotal = (vanilla_blizzard_price - 1.00) * bquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the small vanilla blizzards are $" << btotal << endl;
        }
        else if (bflavor == 2) {
            cout << "How many do you want?" << endl;
            cin >> bquantity;
            btotal = (chochlate_blizzard_price - 1.00) * bquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the small chochlate blizzards are $" << btotal << endl;
        }
        else if (bflavor == 3) {
            cout << "How many do you want?" << endl;
            cin >> bquantity;
            btotal = (twist_blizzard_price - 1.00) * bquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the small twist blizzards are $" << btotal << endl;
        }
        else {
            cout << "you did not enter a valid number!" << endl;
        }
    }
    else if (bsize == 2) {
        cout << "What flavor do you want?" << endl;
        cin >> bflavor;
        if (bflavor == 1) {
            cout << "How many do you want?" << endl;
            cin >> bquantity;
            btotal = (vanilla_blizzard_price - 0.50) * bquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the medium vanilla blizzards are $" << btotal << endl;
        }
        else if (bflavor == 2) {
            cout << "How many do you want?" << endl;
            cin >> bquantity;
            btotal = (chochlate_blizzard_price - 0.50) * bquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the medium chochlate blizzards are $" << btotal << endl;
        }
        else if (bflavor == 3) {
            cout << "How many do you want?" << endl;
            cin >> bquantity;
            btotal = (twist_blizzard_price - 0.50) * bquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the medium twist blizzards are $" << btotal << endl;
        }
        else {
            cout << "You did not enter a valid number!" << endl;
        }
    }
    else if (bsize == 3) {
        cout << "What flavor do you want?" << endl;
        cin >> bflavor;
        if (bflavor == 1) {
            cout << "How many do you want?" << endl;
            cin >> bquantity;
            btotal = vanilla_blizzard_price * bquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the large vanilla blizzards are $" << btotal << endl;
        }
        else if  (bflavor == 2) {
            cout << "How many do you want?" << endl;
            cin >> bquantity;
            btotal = chochlate_blizzard_price * bquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the large chochlate blizzards are $" << btotal << endl;
        }
        else if (bflavor == 3) {
            cout << "How many do you want?" << endl;
            cin >> bquantity;
            btotal = twist_blizzard_price * bquantity;
            cout << fixed << setprecision(2);
            cout << "The price for the large twist blizzards are $" << btotal << endl;
        }
        else {
            cout << "You did not enter a valid number!" << endl;
        }
    }
    else {
        cout << "You did not enter a valid number!" << endl;
    }
return b_choice;
}

int main()
{
    cout << "1 = cone, 2 = blizzard" << endl;
    cout << "Do you want to order a cone or blizzard?" << endl;
    cin >> choice;

    if (choice == 1) {
        c_choice = cone_choice(choice, choice, choice);
    }
    else if (choice == 2) {
        b_choice = blizzard_choice(choice, choice, choice);
    }
    else {
        cout << "You did not enter a valid number!" << endl;
    }

    c_and_b_totals = ctotal + btotal;
    cout << "Do you want to order another one?" << endl;
    cout << "y = yes, n = no" << endl;
    cin >> yes_no;

    while ((yes_no == 'y') || (yes_no == 'Y')) {
        cout << "1 = cone, 2 = blizzard" << endl;
        cin >> choice;

    if (choice == 1) {
        c_choice = cone_choice(choice, choice, choice);
    }
    else if (choice == 2) {
        b_choice = blizzard_choice(choice, choice, choice);
    }
    else {
        cout << "You did not enter a valid number!" << endl;
    }
    }
    cout << fixed << setprecision(2);
    cout << "Your total for cones and blizzards is $" << c_and_b_totals << endl;

    return 0;
}
