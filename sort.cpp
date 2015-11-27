#include "sort.h"

Sort::Sort()
{

}

void Sort::sortByName(vector<Scientists> a, string s)

{
    string j, x;

    for (size_t index = 1; index < vec.size(); index++) {
        x = a[index].name;
        j = index;
        while (j > 0 && a[j-1].name > x) {
            a[j].name = a[j-1].name;
            j = j-1;
            a[j].name = x;
        }
    }
    displayArray(a);
}

void sortByAge(vector<Scientists> a, string s)
{
    string j, x;

    for (size_t index = 1; index < vec.size(); index++) {
        x = a[index].age;
        j = index;
        while (j > 0 && a[j-1].age > x) {
            a[j].age = a[j-1].age;
            j = j-1;
            a[j].age = x;
        }
    }
    displayArray(a);
}

void sortByGender(vector<Scientists> a, string s)
{
    string j, x;

    for (size_t index = 1; index < vec.size(); index++) {
        x = a[index].gender;
        j = index;
        while (j > 0 && a[j-1].gender > x) {
            a[j].gender = a[j-1].gender;
            j = j-1;
            a[j].gender = x;
        }
    }
    displayArray(a);
}

void sortByDateOfBirth(vector<Scientists> a, string s)
{
    string j, x;

    for (size_t index = 1; index < vec.size(); index++) {
        x = a[index].dateOfBirth;
        j = index;
        while (j > 0 && a[j-1].dateOfBirth > x) {
            a[j].dateOfBirth = a[j-1].dateOfBirth;
            j = j-1;
            a[j].dateOfBirth = x;
        }
    }
    displayArray(a);
}

void sortByDateOfDeath(vector<Scientists> a, string s)
{
    string j, x;

    for (size_t index = 1; index < vec.size(); index++) {
        x = a[index].dateOfDeath;
        j = index;
        while (j > 0 && a[j-1].dateOfDeath > x) {
            a[j].dateOfDeath = a[j-1].dateOfDeath;
            j = j-1;
            a[j].dateOfDeath = x;
        }
    }
    displayArray(a);
}

void Sort::displayArray(const vector<Scientists> a)
{
    for (size_t i = 0; i < a.size(); i++) {
        cout << "Name: " << a[i].name << " Age: " << a[i].age << "Gender: " << a[i].gender << " Date of birth: " << a[i].dateOfBirth << " Date of death: " << a[i].dateOfDeath;
        cout << endl;
    }
}
