#include <iostream>

using namespace std; // <3 ily35 <3

struct life //node
{
    int noc; //number of traying
    float pe; // percentage of chance
    life* next;
};
class lioofli
{
    private :
    life* bgn;
    public:
    lioofli(){bgn = NULL;}
    void addnt(int a) ;
    void enter();
    void fnprint(int f);
};
void lioofli::addnt(int a)
 {
    life* nlife = new life ; // new noDe
    nlife->noc=a;
    nlife->next=bgn;
    bgn = nlife ;
 }
 void lioofli::enter()
 {

    cout<<"enter the percentage in this traying: ";// F | T ! :D <3 ily35
    cin>>bgn->pe;
 }
 void lioofli::fnprint(int f)
 {
 life* nd = bgn;
 while (nd!=NULL)
 {
    if (f== nd->noc)
    {
    cout<<"the number of traying "<<nd->noc;
    cout<<"the of traying "<<nd->pe;
    }

 nd =bgn->next;
 }}
int main()
{
    int s,b, v=1 ;char c;
    lioofli lo;
    do {
    for(;;)
    {
    cout <<"hello :\n1-add your try\n2-show rem: ";
    cin>>c;
    if(c=='a')
    {
    cout<<"enter the number: ";
    cin>>b;
    lo.addnt(b);
    lo.enter();

    }

    s= 1 ;
    v=2;
    } } while(s!=1);

    return 0;
}
