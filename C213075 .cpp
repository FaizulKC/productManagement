#include<bits/stdc++.h>
#include<fstream>
using namespace std;


class Product
{
    public:
        int productID;
        string productCatagory, productName;


};

class soldProduct : public Product
{
    ///productID,productCatagory, productName
    public:
        int customerID, price;

};



class broughtProduct : public soldProduct
{
    ///productID,productCatagory, productName, customerID, price
    ///customer id = buyer id
    public:
        string buyername;


};

int main()
{
    ///PRODUCT
    ///Product Read
    char c;
    Product x;
    ifstream file;
    file.open("productIN.txt");
    file >> x.productID >> c;
    getline(file, x.productCatagory);
    getline(file, x.productName);
    file.close();


    ///Product Write
    ofstream file1;
    file1.open("productOUT.txt");
    file1 << x.productID << "\n" << c << x.productCatagory<< "\n" << x.productName << endl;
    file1.close();


   ///CUSTOMER
   ///Customer Read
   soldProduct y;
   ifstream file3;
   file3.open("customerIN.txt");
   file3 >> y.customerID >> y.price;
   file3.close();

   ///Customer write
   ofstream file4;
   file4.open("customerOUT.txt");
   file4 << y.customerID << "\n" << y.price << endl;
   file4.close();



    ///BUYER
    ///Buyer Read
    char ch;
    broughtProduct z;
    ifstream file5;
    file5.open("buyerIN.txt");
    file5 >> z.customerID >> z.price >> ch;
    getline(file5, z.buyername);
    file5.close();


    ///Buyer Read
    ofstream file6;
    file6.open("buyerOUT.txt");
    file6 << z.customerID << "\n" << z.price << "\n"  << ch << z.buyername << endl;
    file6.close();

    return 0;
}

