// //C++ STL
// //Pairs
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     pair<int,string>p;
// //     //p=make_pair(2,"abc");
// //     p={2,"abc"};
// //     pair<int,string>&p1=p;
// //     p1.first=3;
// //     cout<<p.first<<" "<<p.second<<endl;
// // }

// //Vectors
// // #include <bits/stdc++.h>
// // using namespace std;

// // void printVec(vector<int> v)
// // {   cout<<"size:"<<v.size()<<endl;
// //     for(int i=0;i<v.size();i++)
// //     {
// //         cout<<v[i]<<" ";
// //     }
// //     cout<<endl;
// // }


// // int main()
// // {
// //     vector<int> v;
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n;i++)
// //     {
// //         int x;
// //         cin>>x;
// //         v.push_back(x); //O(1)
// //     }
// //     printVec(v);
// //     vector<int> v(10,3); Vector of size 10 with values initialized to 3
//         //v.pop_back();//O(1)
//         //vector<int> v2=v; O(n)
// // }
// //Nesting in vectors 
// // #include <bits/stdc++.h>
// // using namespace std;
// // void printVec(vector<pair<int,int>> &v)
// // {
// //     cout<<"size:"<<v.size()<<endl;
// //     for(int i=0;i<v.size();i++)
// //     {
// //         cout<<v[i].first<<" "<<v[i].second<<endl;
// //     }
// //     cout<<endl;
// // }

// // int main()
// // {
// //     vector<pair<int,int>> v;
// //     printVec(v);
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n;i++)
// //     {
// //         int x;
// //         int y;
// //         cin>>x;
// //         cin>>y;
// //         v.push_back({x,y});
// //     }
// //     printVec(v);
    
// // }
// //Array of Vectors
// // #include <bits/stdc++.h>
// // using namespace std;
// // void printVec(vector<int> &v)
// // {
// //     cout<<"size:"<<v.size()<<endl;
// //     for(int i=0;i<v.size();i++)
// //     {
// //         cout<<v[i]<<endl;
// //     }
// //     cout<<endl;
// // }

// // int main()
// // {
// //     int N;
// //     cin>>N;
// //     vector<int> v[N];
// //     for(int i=0;i<N;i++)
// //     {
// //         int n;
// //         cin>>n;
// //         for(int j=0;j<n;j++)
// //         {
// //             int x;
// //             cin>>x;
// //             v[i].push_back(x);
// //         }
        
// //     }
// //     for(int i=0;i<N;i++)
// //         {
// //             printVec(v[i]);
// //         }
// // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // void printVec(vector<int> &v)
// // {
// //     cout<<"size:"<<v.size()<<endl;
// //     for(int i=0;i<v.size();i++)
// //     {
// //         cout<<v[i]<<endl;
// //     }
// //     cout<<endl;
// // }
// // int main()
// // {
// //     int N;
// //     cin>>N;
// //     vector<vector<int>> v;
// //     for(int i=0;i<N;i++)
// //     {
// //         int n;
// //         cin>>n;
// //         vector<int> temp;
// //         for(int j=0;j<n;j++)
// //         {
// //             int x;
// //             cin>>x;
// //             temp.push_back(x);
// //         }
// //         v.push_back(temp);
// //     }
// //     for(int i=0;i<v.size();i++)
// //     {
// //         printVec(v[i]);
// //     }
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v={2,3,4,5,6,7};
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     // vector<int>::iterator it=v.begin();
//     // //cout<<(*(it+1))<<endl;
//     // for(it=v.begin();it!=v.end();it++)
//     // {
//     //     cout<<(*it)<<endl;
//     // }
//     vector <pair<int,int>> v_p={{1,2},{2,3},{3,4}};
//     vector <pair<int,int>>::iterator it;
//     for(it=v_p.begin();it!=v_p.end();it++)
//     {
//         cout<<(*it).first<<" "<<(*it).second<<endl;
//     }
//     for(it=v_p.begin();it!=v_p.end();it++)
//     {
//         cout<<it->first<<" "<<it->second<<endl;
//     }
// } 
//Rnage Based Loops and Auto KeYWORD
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v={2,3,4,5,6,7};
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     for(auto value:v)
//     {
//         cout<<value<<" ";
//     }
//     cout<<endl;
// }
//Maps
#include <bits/stdc++.h>
using namespace std;
void print(map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    map<int,string> m;
    m[1]="abc"; //O(logn)
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    // map<int,string>::iterator it;
    // for(it=m.begin();it!=m.end();it++)
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
   auto it= m.find(5);
   // if(it==m.end())
   // {
   //  cout<<"NO VALUE";
   // }
   // else 
   // {
   //  cout<<(*it).first<<" "<<(*it).second;
   // }
    m.erase(it);
    m.clear();
    print(m);
    
}

