#include <iostream>
#include <cmath>
#include <string>
#include <random>
#include <fstream>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;

std::string removeq()
{
    return 0;
}

std::string scvpull(string file, int index)
{

    ifstream ip(file);
    if (!ip.is_open())
        std::cout << "ERROR: File Open" << '\n';
    string first, second, third, fourth;
    int total_lines=0;
    while (getline(file, line))
    {
        total_lines++;
        lines.push_back(line);
    }
    while (ip.good())
    {
        getline(ip, first, ',');
        getline(ip, second, ',');
        getline(ip, third, ',');
        getline(ip, fourth, '\n');
    }
    ip.close();
    if (index = 0)
    {
        return first;
    }
    else if (index = 1)
    {
        return second;
    }
    else if (index = 2)
    {
        return third;
    }
    else if (index = 3)
    {
        return fourth;
    }
    else
    {
        return 0;
    }
}

std::string randword(string type)
{

    if (type == "nametype")
    {
        return scvpull("firstnames.csv", 1);
    }
    else if (type == "adjvtype")
    {
        return scvpull("adjectives.csv", 0);
    }
    else if (type == "animltype")
    {
        return scvpull("animals.csv", 0);
    }
    else if (type == "verbtype")
    {
        return scvpull("verbs.csv", 0);
    }
    else if (type == "excltype")
    {
        return scvpull("interjections.csv", 0);
    }
    else
    {
        return "wrong type error";
    }
}

std::string checkblank(string word, string type)
{
    if (word == "")
    {
        return randword(type);
    }
    else
    {
        return word;
    }
}

int main()
{
    string name, adjv, animl, verb1, excl, verb2, verb3;

    cout << "enter a name: ";
    getline(cin, name);
    name = checkblank(name, "nametype");

    cout << "enter a adjective: ";
    getline(cin, adjv);
    adjv = checkblank(adjv, "adjvtype");

    cout << "enter a animal: ";
    getline(cin, animl);
    animl = checkblank(animl, "animltype");

    cout << "enter a verb: ";
    getline(cin, verb1);
    verb1 = checkblank(verb1, "verbtype");

    cout << "enter a exclamation: ";
    getline(cin, excl);
    excl = checkblank(excl, "excltype");

    cout << "enter another verb: ";
    getline(cin, verb2);
    verb2 = checkblank(verb2, "verbtype");

    cout << "enter a third verb: ";
    getline(cin, verb3);
    verb3 = checkblank(verb3, "verbtype");

    cout << "The other day, " << name << " was really in trouble. " << endl;
    cout << " It all started when " << name << " saw a very "
         << " " << adjv << " " << animl << " " << verb1 << "ed down the hallway. " << endl;
    cout << excl << "! " << name << " yelled. " << endl;
    cout << "But all " << name << " could think to do was " << verb2 << " the " << animl << " repeatedly." << endl;
    cout << "Miraculously, that caused the " << animl << " to stop " << verb1 << "ing, but not before it " << verb3 << "ed right in front of " << name << "'s family" << endl;

    return 0;
}