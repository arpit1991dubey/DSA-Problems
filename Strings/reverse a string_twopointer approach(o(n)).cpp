int main() {
    string str;
    cin>>str;
    //int index=0;
   int i=0;
   int j=str.length()-1;
   while(i<j)
   {
       swap(str[i],str[j]);
       i++;
       j--;
   }
    cout<<str;
	return 0;
}
