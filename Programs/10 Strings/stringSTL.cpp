//NOTE -> comment other functions before executing a single one for better understanding.
#include<iostream>
#include<string>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
//1 append

    string s1="fam";
    string s2="ily";

    //M-1
    s1.append(s2);      
    cout<<s1<<endl;

    //M-2 (append without changing s1 and s2)
    cout<<s1+s2<<endl;

    //M-3 (append without using s.append())
    s1=s1+s2;
    cout<<s1<<endl;

// accesing characters.
    cout<<s1[2]<<endl;
    
//2 clear (used to clear string value)

    string abc="sabfkb sdbf hbafawe fal v rhebgbh";
    abc.clear();
    cout<<abc;

//3 compare

    string str1= "abc";
    string str2= "abc";
    cout<<str1.compare(str2)<<endl;

    if(!str1.compare(str2))
        cout<<"strings are equal"<<endl;

//4 empty (to check whether string is empty)

    str1.clear();

    if(str1.empty())
        cout<<"string is empty"<<endl;

//delete , find and insert ->
//5 erase (to remove some element from the string)
    string s="nincompoop";

    s.erase(3, 3);  //s.erase(starting index, number of characters to be erased)

    cout<< s <<endl;

//6 find (to find whether a particular substring is present)

    cout<<s.find("poop")<<endl;  //returns first index where the substring is found.

//7 insert (to insert a substring within the string)

    s.insert(3, "com");  //s.insert(index to insert, "subtring")
    cout<<s<<endl;


//8 size
    cout<<s.size()<<endl;
    //or
    cout<<str2.length()<<endl;

    //use of size/length
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<endl;
    }

//9 substr
    string sSub=s.substr(6,4); //s.substr(starting index, number of characters needed in substring)

    cout<<sSub<<endl;

//10 string to integer
    string integerStr="786";
    int x=stoi(integerStr);

    cout<<x+2<<endl;

//11 integer to string
    int y=786;
    string stri= to_string(y);

     cout<< stri + "2" <<endl;

//12 sort (have to #include<algorithm> to use this)
    string strx="adnfuhefebfahjlfva";
    
    sort(strx.begin(),strx.end());      //sorts string in ascending order.
    cout<<strx<<endl;

//reverse (have to #include<utility> to use this)
    reverse(strx.begin(),strx.end());
    cout<<strx<<endl;

 return 0;
}