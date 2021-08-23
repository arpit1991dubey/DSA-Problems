int main()
{
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));
   
    return 0;
}
