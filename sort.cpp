#include "sort.h"
#include "scientists.h"
#include <string>
#include <algorithm>

Sort::Sort()
{

}

void Sort::sortByName(vector<Scientists> a)
{
   /* string j, x;

    for (int index = 1; (unsigned)index < a.size(); index++) {
        x = a[index].getName();
        j = index;
        while (j > 0 && a[j-1].getName() > x) {
            a[j].getName() = a[j-1].getName();
            j = j-1;
            a[j].getName() = x;
        }
    }*/
    vector<string> temp;
    for (unsigned int i = 0; i < a.size(); i++) {
        temp[i] = a[i].getName();
    }
    sort(temp.begin(), temp.end());
    displayVector(temp, a);
}

void Sort::sortByAge(vector<Scientists> a)
{
    /*string j, x;

    for (int index = 1; (unsigned)index < a.size(); index++) {
        x = a[index].getAge;
        j = index;
        while (j > 0 && a[j-1].age > x) {
            a[j].age = a[j-1].age;
            j = j-1;
            a[j].age = x;
        }
    }*/
    vector<string> temp;
    for (unsigned int i = 0; i < a.size(); i++) {
        temp[i] = a[i].getAge();
    }
    sort(temp.begin(), temp.end());
    displayVector(temp, a);
}

void Sort::sortByGender(vector<Scientists> a)
{
    /*string j, x;

    for (int index = 1; (unsigned)index < a.size(); index++) {
        x = a[index].gender;
        j = index;
        while (j > 0 && a[j-1].gender > x) {
            a[j].gender = a[j-1].gender;
            j = j-1;
            a[j].gender = x;
        }
    }*/
    vector<string> temp;
    for (unsigned int i = 0; i < a.size(); i++) {
        temp[i] = a[i].getGender();
    }
    sort(temp.begin(), temp.end());
    displayVector(temp, a);
}

void Sort::sortByDateOfBirth(vector<Scientists> a)
{
    /*string j, x;

    for (int index = 1; (unsigned)index < a.size(); index++) {
        x = a[index].dateOfBirth;
        j = index;
        while (j > 0 && a[j-1].dateOfBirth > x) {
            a[j].dateOfBirth = a[j-1].dateOfBirth;
            j = j-1;
            a[j].dateOfBirth = x;
        }
    }    */
    vector<string> temp;
    for (unsigned int i = 0; i < a.size(); i++) {
        temp[i] = a[i].getYearOfBirth();
    }
    sort(temp.begin(), temp.end());
    displayVector(temp, a);
}

void Sort::sortByDateOfDeath(vector<Scientists> a)
{
    /*string j, x;

    for (int index = 1; (unsigned)index < a.size(); index++) {
        x = a[index].dateOfDeath;
        j = index;
        while (j > 0 && a[j-1].dateOfDeath > x) {
            a[j].dateOfDeath = a[j-1].dateOfDeath;
            j = j-1;
            a[j].dateOfDeath = x;
        }
    }*/
    vector<string> temp;
    for (unsigned int i = 0; i < a.size(); i++) {
        temp[i] = a[i].getYearOfDeath();
    }
    sort(temp.begin(), temp.end());
    displayVector(temp, a);
}

void Sort::displayVector(vector<string> temp, vector<Scientists> a)
{
    for (size_t i = 0; i < temp.size(); i++) {
        for (size_t j = 0; j < a.size(); j++) {
            if (temp[i].compare(a[j].getName()) == 0 ) {
                cout << "Name: " << a[i].getName() << " Age: " << a[i].getAge() << "Gender: " << a[i].getGender() << " Date of birth: " << a[i].getYearOfBirth() << " Date of death: " << a[i].getYearOfDeath();
                cout << endl;
            }
        }
    }
}
