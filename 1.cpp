#include<bits/stc++.h>
using namespace std;

#define MAX 5;

int main()
{

   stack<int>st;


   st.push(50);
   st.push(71);


   reverse();
   cout<<"2 elements:"<<PrintStack(st)<<endl;

   st.push(99);
   reverse();
   cout<<"3 elements:"<<PrintStack(st)<<endl;
   
   st.push(125);
   reverse();
   
   st.push(192);
   reverse();

   cout<<"5 elements:"<<PrintStack(st)<<endl;
   reverse();

   st.pop();

   reverse();

   cout<<"4 elements:"<<PrintStack(st)<<endl;


   reverse();

   st.pop();


   cout<<"3 elements:"<<endl;
 }


void insert_at_bottom(int curr)
    {
        if(st.empty())   
            st.push(curr);
        else
        {
            int el=st.top();
            st.pop();
            insert_at_bottom(curr);
            st.push(el);
        }
    }
    void reverse()
    {
        if(st.empty())
            return;
        int d=st.top();
        st.pop();
        reverse();
        insert_at_bottom(d); 
    }


void PrintStack(stack<int> st)
{
   
    if (st.empty())
        return;

    int x = st.top();

    st.pop();
 
    cout << x << ' ';
 
  
    PrintStack(st);
  
    st.push(x);
}
