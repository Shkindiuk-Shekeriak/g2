int main()
{ double j[5],i1=0,i2=0;
    int k=0;
    vvid(k,j);
    i2=introp(j,i1,k,i2);
    ofstream out("text1.txt");
    cout<<i2<<" byte ";
    out<<i2<<" byte ";
    out.close();
}

