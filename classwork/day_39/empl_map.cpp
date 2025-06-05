#include <iostream>
#include <map>
#include <vector>
#include <string>


using namespace std;
class Emp
{
public:
    Emp(int id, std::string name) : id(id), name(name) {}
    void disp()const {
        cout << "ID: " << id << "\tName: " << name << endl;
    }
private:
    int id;
    string name;

};



int main()
{
    Emp e1(101, "abc1");
    Emp e2(102, "abc2");
    std::map<int, vector<Emp>> mapEmp;

    mapEmp[1].push_back(e1);  
    mapEmp[2].push_back(e2);
    
    for (const auto& pair : mapEmp)
    {
        cout << "Group ID: " << pair.first << endl;
        for (const auto& emp : pair.second) 
        {
            emp.disp();
        }
        cout << endl;
    }
    //auto it = mapEmp.begin();
   //auto elef = i->first; //points to the key
   //auto eles = i->second; //points to the value i.e now here vector
   //for (auto itr : mapEmp)
   //{
   //    for (auto f : itr.second)
   //        f.disp();
   //}  
}