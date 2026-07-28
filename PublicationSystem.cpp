#include <iostream>
#include <string>
using namespace std;

class Publication
{
    protected:
        string title;
        float price;

    public:
        void getPublication()
        {
            cout << "Enter Title: ";
            cin >> title;

            cout << "Enter Price: ";
            cin >> price;

            if (price < 0)
                throw price;
        }
        void displayPublication()
        {
            cout << "Tital: " << title << endl;
            cout << "Price: " << price << endl;
        }
        void resetPublication()
        {
            title = "0";
            price = 0;
        }

};

class Book : public Publication
{
    private:
        int pageCount;

    public:
        void getData()
        {
            try
            {
                getPublication();

                cout << "Enter Page Count: ";
                cin >> pageCount;

                if (pageCount < 0)
                    throw pageCount;
            }
            catch (...)
            {
                cout << "\nInvalid Input!! Exeception Caught.\n";
                resetPublication();
                pageCount = 0;
            }
        }
        void displayData()
        {
            cout << "\n-------------Book Details------------" << endl;
            displayPublication();
            cout << "Page Count: " << pageCount << endl;
        }
};
class Tape : public Publication
{
    private:
        float playTime;

    public:
        void getData()
        {
            try
            {
                getPublication();

                cout << "Enter Playing Time (minutes): ";
                cin >> playTime;

                if (playTime < 0)
                    throw playTime;

            }
            catch (...)
            {
                cout << "\nInvalid Input!! Exeception Caught.\n";
                resetPublication();
                playTime = 0;
            }
        }
        void displayData()
        {
            cout << "\n-------------Tape Details------------" << endl;
            displayPublication();
            cout << "Playing Time : " << playTime << "minutes" << endl;
        }
};
int main()
{
    Book a;
    Tape t;

    cout << "Enter Book Details\n";
    a.getData();

    cout << "Enter Tape Details\n";
    t.getData();

    cout << "\n===========Publication Information===========\n";

    a.displayData();
    t.displayData();

    return 0;
    
}
