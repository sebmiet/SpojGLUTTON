#include <iostream>

using namespace std;


int main()
{
    int proby;
    cin>>proby;
    for(int i=1; i<=proby; i++)
    {
        int zarloki=0, pudlociastek=0, doba, czasjedzenia=0, iloscciastek=0, ilepudel=0;
        cin>>zarloki>>pudlociastek;
        double *tablicaczasu=NULL, *tablicaciastek=NULL;
        tablicaczasu=new double[zarloki];
        tablicaciastek=new double[zarloki];
        doba=86400;
        for(int i=0; i<zarloki; i++)
        {
            cin>>czasjedzenia;
            tablicaczasu[i]=czasjedzenia;
        }
        for(int j=0; j<zarloki; j++)
        {
            tablicaciastek[j]=doba/tablicaczasu[j];
        }
        for(int k=0; k<zarloki; k++)
        {
            iloscciastek+=tablicaciastek[k];
        }
        if(iloscciastek%pudlociastek!=0)
        {
            ilepudel=(iloscciastek/pudlociastek)+1;
            cout<<ilepudel<<endl;
        }
        else
        {
            ilepudel=iloscciastek/pudlociastek;
            cout<<ilepudel<<endl;
        }
         delete [] tablicaciastek ;
         delete [] tablicaczasu ;
    }

    return 0;
}
