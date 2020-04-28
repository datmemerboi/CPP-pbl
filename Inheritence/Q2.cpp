#include <bits/stdc++.h>
using namespace std;

class Base {
    public:
        pub_base_fun();
    protected:
        int prot_var;
        prot_base_fun();
    private:
        int priv_base_var;
};

class Der1:public Base 
{
    public:
        pub_der1_fun();
    protected:
        int prot_var;
        prot_der1_fun();
    private:
        int priv_der1_var;
};

class Der2:public Base
{
    public:
        pub_der2_fun();
    protected:
        int prot_var;
        prot_der2_fun();
    private:
        int priv_der2_var;
};

int main() {
    Der1 d1; Der2 d2;

    cout<<"d1 is child of Der1 | d2 is child of Der2"<<endl;
    cout<<"d1 has access to pub_base_fun(), int prot_var, prot_base_fun(), pub_der1_fun, priv_der1_var"<<endl;
    cout<<"d2 has access to pub_base_fun(), int prot_var, prot_base_fun(), pub_der2_fun, priv_der2_var"<<endl;

    return 0;
}