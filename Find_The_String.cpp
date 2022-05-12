    #include<iostream>

    #include<string>

    using namespace std;


    

    int main()

    {

        int a,b;

        cin>>a;


    

        for(b=0;b<a;++b)

        {

            int c,d,x,y,i;

            cin>>c>>d;


    

            char arr[c][d];

            for(x=0;x<c;++x)

            {

                for(y=0;y<d;++y)

                {

                    cin>>arr[x][y];

                }

            }


    

            string str;

            cin>>str;

            int count=0;


    

            for(i=0;i<(str.size());++i)

            {

                x=i%c;

                for(y=0;y<d;++y)

                {

                    if(arr[x][y]==str[i])

                    {

                        arr[x][y]='\0';

                        break;

                    }

                }

                if(y==d)

                {

                    count=1;

                    break;

                }

            }

            if(count==0)

                cout<<"Yes"<<endl;

            else

                cout<<"No"<<endl;       

        }

    }




    