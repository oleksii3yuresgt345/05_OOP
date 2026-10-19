#include <iostream>
using namespace std;

class Date
{
public:
    int day;
    int month;
    int year;
    void setDay(int day)
    {
        this->day = day;
    }
    int getDay() //int getDay(Date* this)
    {
        day += 10;
        return day;
    }
    int getDay()const
    {
        return day;
    }

    void Print()const
    {
        cout << "Date : " << day << "/" << month << "/" << year << endl;
    }
};

class Account
{
private:
    double sum;
    const double rate;
public:
    Account(double sum, double rate): rate(rate)
    {
        this->sum = sum;
    }
    double getRate()const
    {
        return rate;
    }
    double getIncome()
    {
        return sum * rate / 100;
    }
    double getIncome()const
    {
        return sum * rate / 100;
    }
    double getSum()const
    {
        return sum;
    }
    double setSum()
    {
        sum += getIncome();
        return sum;
    }
};

void doSomething(long number)
{

}
float doSomething() { return 1.5; } // double --> float

class Array
{
    int* arr;
    int size;
public:
    explicit Array(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    ~Array()
    {
        if (arr != nullptr)
            delete[]arr;
    }

    int getSize()const
    {
        return size;
    }

    int getValue(int index)
    {
        return arr[index];
    }
    void setValue(int num, int index)
    {
        arr[index] = num;
    }
    void display(int index)const
    {
        cout << arr[index] << " ";
    }
};


void PrintArray(const Array& arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        arr.display(i);
    }
    cout << endl;
}
void Test(int a){}
int main()
{
   /* Print("sfsdfsdf");
    Print(77);
    Test(100);
    Test("sfdsgsdg");*/
    int size = 4;
    Array arr(size);
    for (int i = 0; i < arr.getSize(); i++)
    {
        arr.setValue(size - i, i);
    }
    PrintArray(arr);
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    //Explicit (if contructor has exactly 1 argument)
    //PrintArray(8); //implicit int ---> Array

    //Array a = 100;
    //PrintArray(a);

    /*
    int a = 3.14; //implicit   double ---> int 
    cout << a << endl;

    double b(10); //implicit   int ---> double
    cout << b << endl;

    doSomething(5); //implicit int ---> long


    float pi = (float)3.14; //explicit
    */

    /*
    Account account1(2000, 5);


    const Account account2(5000, 8);

    cout << account1.getRate() << endl;
    cout << account2.getRate() << endl;

    cout << account1.getSum() << endl;
    cout << account2.getSum() << endl;

    cout << account1.getIncome() << endl;
    cout << account2.getIncome() << endl;

    cout << account1.setSum() << endl;
    //cout << account2.setSum() << endl; error
    */

    /*
    const int size = 5;
    const int month[3]{ 31,31,28 };
    //month[0] = 45;

    Date holidayDate{ 25,10,2026 };
    holidayDate.Print();
    holidayDate.setDay(19);
    holidayDate.Print();

    holidayDate.day = 31;
    holidayDate.Print();

    holidayDate.getDay();

    const Date indepencyDay{ 24,8,2027 };
    indepencyDay.Print();
    indepencyDay.day = 25;
    indepencyDay.setDay(19);
    indepencyDay.getDay();
    //indepencyDay.Print();
    */

}
