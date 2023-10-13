/*
#include<iostream>
#include<vector>



int main()
{
    vector<int> vec{ 1,2,3,4,5 };
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

    vector<int>::iterator ptr;

    for (ptr = vec.begin();ptr!=vec.end(); ptr++)
    {
        cout << *ptr;
    }
}
*/

#include <iostream>
#include <map>
#include <string>
#include <locale> // ��� setlocale

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    map<string, string> dictionary;
    int command;

    cout << "����:" << endl;
    cout << "1 ��������" << endl;
    cout << "2 �������" << endl;
    cout << "3 �������������" << endl;
    cout << "4 �����" << endl;
    cout << "5 �����" << endl;
    cout << "��������: ";
    cin >> command;

    switch (command)
    {
    case 1:
        string word, translation;
        cout << "������� �����: ";
        cin >> word;
        cout << "������� �������: ";
        cin >> translation;
        dictionary[word] = translation;
        cout << "����� ���������." << endl;
        break;
    case 2:
        string wordToDelete;
        cout << "������� �����, ������� ������ �������: ";
        cin >> wordToDelete;
        if (dictionary.find(wordToDelete) != dictionary.end()) {
            dictionary.erase(wordToDelete);
            cout << "����� �������." << endl;
        }
        else {
            cout << "����� �� ������� � �������." << endl;
        }
        break;
    case 3:
        string wordToEdit, newTranslation;
        cout << "������� �����, ������� ������ ���������������: ";
        cin >> wordToEdit;
        if (dictionary.find(wordToEdit) != dictionary.end()) {
            cout << "������� ����� �������: ";
            cin >> newTranslation;
            dictionary[wordToEdit] = newTranslation;
            cout << "����� ���������������." << endl;
        }
        else {
            cout << "����� �� ������� � �������." << endl;
        }
        break;
    case 4:
        string wordToSearch;
        cout << "������� ����� ��� ������: ";
        cin >> wordToSearch;
        if (dictionary.find(wordToSearch) != dictionary.end()) {
            cout << "�������: " << dictionary[wordToSearch] << endl;
        }
        else {
            cout << "����� �� ������� � �������." << endl;
        }
        break;
    case 5:
        break;
    default:
        cout << "������: ������������ �����." << endl;
    }

    return 0;
}
