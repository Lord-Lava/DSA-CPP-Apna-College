string infixToPostfix(string s){
//     stack<char> st;
//     string res;

//     for (int i = 0; i < s.length(); i++)
//     {
//         if((s[i]>='a' && s[i]<='z') || s[i]>=65 && s[i]<=90){
//             res+=s[i];
//         }
//         else if(s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(s[i]==')'){
//             while(!st.empty() && st.top()!='('){
//                 res+=st.top();
//                 st.pop();
//             }
//             if(!st.empty()){
//                 st.pop();   //popping '('
//             }
//         }
//         else{   //for operators 
//             while (!st.empty() && prec(st.top())>=prec(s[i]))
//             {
//                 res+=st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
    
//     while (!st.empty())
//     {
//         res+=st.top();
//         st.top();
//     }
//     return res;
// }