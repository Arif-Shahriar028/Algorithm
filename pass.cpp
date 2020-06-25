    #include<bits/stdc++.h>
     
    #define ll long long int
    #define hola int main()
    #define adios return 0;
    #define pi acos(-1)
    #define case ll cn; cin>>cn; while(cn--)
    #define loop for(ll i=0; i<n; i++)
    #define pb push_back
    #define boost ios_base::sync_with_stdio(0)
    using namespace std; 
    
    hola
    {
    	boost;
    	ll n, m, i, j {0}, index, count {0}, sum {0};
        ll vb, vs, x, y;
        string s, r, k;

        ll l;
        char a, b, c, d;
        char cache;
        cin>>m;
        cin>>a>>b>>c>>d;
        cin>>s;
        l = s.size();

        if(a=='0' && b=='0'&&c=='0' &&d=='0')
        {
            cout<<"enter pattern"<<endl;
        }
        else if(a=='1' && b=='0'&&c=='0' &&d=='0') // all lower case
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x =(int) s[j] + 97;
                    while(x>122)
                    {
                        x = x - 121 + (s[j]%2);
                        x = x+97;
                    }
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }






        else if(a=='0' && b=='1'&&c=='0' &&d=='0') // all upper case
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x =(int) s[j] + 65;
                    while(x>90)
                    {
                        x = x - 89 - (s[j]%2);
                        x = x+65;
                    }
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }







        else if(a=='0' && b=='0'&&c=='1' &&d=='0') // all spacial character
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x =(int) s[j] + 33;
                    while(x>47)
                    {
                        x = x - 47 + (s[j]%2);
                        x = x+33;
                    }
                    if(x == 39)
                            x = 64;
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }








        else if(a=='0' && b=='0'&&c=='0' &&d=='1') // all numaric character
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x =(int) s[j] + 47;
                    while(x>57)
                    {
                        x = x - 57 + (s[j]%2);
                        x = x+47;
                    }
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }








        else if(a=='1' && b=='1'&&c=='0' &&d=='0') // lower case and upper case  /// note : first char can be upper and last char can be lower, it will ensure both lower and upper case
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x;
                    if((s[j]%2==0 || i==1) && i !=m)
                    {
                        x =(int) s[j] + 97; //lower case shift

                     while(x>122)
                      {
                      
                            x = x - 121 + (s[j]%2);
                            x = x+97;       
                      }
                    }
                        
                    else if(s[j] %2 !=0 || i==m)
                    {
                        x =(int) s[j] + 65; // uppercase shift
                        while(x>90)
                        {
                            
                                x = x - 89 - (s[j]%2);
                                x = x+65;                           
                         }
                    }
                    
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }







else if(a=='1' && b=='0'&&c=='1' &&d=='0') // lower case and special char  /// note : first char can be lower case and last char can be special char, it will ensure both lower case and special
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x;
                    if((s[j]%2==0 || i==1) && i !=m)
                    {
                        x =(int) s[j] + 97; //lower case shift

                     while(x>122)
                      {
                      
                            x = x - 121 + (s[j]%2);
                            x = x+97;       
                      }
                    }
                        
                    else if(s[j] %2 !=0 || i==m)
                    {
                         x =(int) s[j] + 33; // special char shift
                         while(x>47)
                         {
                             x = x - 47 + (s[j]%2);
                             x = x+33;
                         }
                         if(x == 39)
                            x = 64;
                    }
                    
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }










        else if(a=='1' && b=='0'&& c=='0' && d=='1') // lower case and numeric char  /// note : first char can be lower case and last char can be numeric char, it will ensure both lower case and numeric char
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x;
                    if((s[j]%2==0 || i==1) && i !=m)
                    {
                        x =(int) s[j] + 97; //lower case shift

                     while(x>122)
                      {
                      
                            x = x - 121 + (s[j]%2);
                            x = x+97;       
                      }
                    }
                        
                    else if(s[j] %2 !=0 || i==m)
                    {
                         x =(int) s[j] + 47; // numeric char shift
                         while(x>57)
                        {
                             x = x - 57 + (s[j]%2);
                             x = x+47;
                         }
                    }
                    
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }








        else if(a=='0' && b=='1'&& c=='1' && d=='0') // uppper case and special char  /// note : first char can be upper case and last char can be special char, it will ensure both upper case and special
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x;
                    if((s[j]%2==0 || i==1) && i !=m)
                    {
                        x =(int) s[j] + 65; // upper case shift
                         while(x>90)
                        {
                            x = x - 89 - (s[j]%2);
                             x = x+65;
                        }
                    }
                        
                    else if(s[j] %2 !=0 || i==m)
                    {
                         x =(int) s[j] + 33; // special char shift
                         while(x>47)
                         {
                             x = x - 47 + (s[j]%2);
                             x = x+33;
                         }
                         if(x == 39)
                            x = 64;
                    }
                    
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }








else if(a=='0' && b=='1'&& c=='0' && d=='1') // uppper case and numeric char  /// note : first char can be upper case and last char can be numeric char, it will ensure both upper case and numeric char
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x;
                    if((s[j]%2==0 || i==1) && i !=m)
                    {
                        x =(int) s[j] + 65; // upper case shift
                         while(x>90)
                        {
                            x = x - 89 - (s[j]%2);
                             x = x+65;
                        }
                    }
                        
                    else if(s[j] %2 !=0 || i==m)
                    {
                         x =(int) s[j] + 47; // numeric char shift
                         while(x>57)
                        {
                            x = x - 57 + (s[j]%2);
                            x = x+47;
                         }
                    }
                    
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }










        else if(a=='0' && b=='0'&& c=='1' && d =='1') // special and numeric char  /// note : first char can be special char and last char can be numeric char, it will ensure both special char and numeric char
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x;
                    if((s[j]%2==0 || i==1) && i !=m)
                    {
                        x =(int) s[j] + 33; // special char shift
                        while(x>47)
                        {
                            x = x - 47 + (s[j]%2);
                            x = x+33;
                        }
                        if(x == 39)
                            x = 64;
                    }
                        
                    else if(s[j] %2 !=0 || i==m)
                    {
                         x =(int) s[j] + 47; // numeric char shift
                         while(x>57)
                        {
                            x = x - 57 + (s[j]%2);
                            x = x+47;
                         }
                    }
                    
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }










        else if(a=='1' && b=='1'&&c=='1' &&d=='0') // lower case and upper case and special char /// note : first char can be lower , last char can be upper and middle can be special char, it will ensure both lower, special and upper case
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x;
                    if((s[j]%2==0 || i==1) && i !=m && i!= m/2)
                    {
                        x =(int) s[j] + 97; //lower case shift

                     while(x>122)
                      {
                      
                            x = x - 121 + (s[j]%2);
                            x = x+97;       
                      }
                    }
                        
                    else if((s[j] %3 == 0 || i==m) && i != m/2)
                    {
                        x =(int) s[j] + 65; // uppercase shift
                        while(x>90)
                        {
                            
                                x = x - 89 - (s[j]%2);
                                x = x+65;                           
                         }
                    }
 
                    else if((s[j] %2 != 0 && s[j]% 3!=1) || i==m/2)
                    {
                        x =(int) s[j] + 33; // special char shift
                        while(x>47)
                        {
                             x = x - 47 + (s[j]%2);
                             x = x+33;
                        }
                        if(x == 39)
                            x = 64;
                    }
                    
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }











        else if(a=='1' && b =='0'&& c == '1' && d == '1') // lower case and number case and special char /// note : first char can be lower , last char can be special and middle can be number char, it will ensure both lower, special and upper case
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x;
                    if((s[j]%2==0 || i==1) && i !=m && i!= m/2)
                    {
                        x =(int) s[j] + 97; //lower case shift

                     while(x>122)
                      {
                      
                            x = x - 121 + (s[j]%2);
                            x = x+97;       
                      }
                    }
                        
                    else if((s[j] %3 == 0 || i==m) && i != m/2)
                    {
                        x =(int) s[j] + 47; // numeric char shift
                         while(x>57)
                        {
                            x = x - 57 + (s[j]%2);
                            x = x+47;
                        }
                    }
 
                    else if((s[j] %2 != 0 && s[j]% 3!=1) || i==m/2)
                    {
                        x =(int) s[j] + 33; // special char shift
                        while(x>47)
                        {
                             x = x - 47 + (s[j]%2);
                             x = x+33;
                        }
                        if(x == 39)
                            x = 64;
                    }
                    
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }









else if(a=='0' && b =='1'&& c == '1' && d == '1') // upper case and number case and special char /// note : first char can be upper , last char can be special and middle can be number char, it will ensure both upper, special and numeric case
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x;
                    if((s[j]%2==0 || i==1) && i !=m && i!= m/2)
                    {
                        x =(int) s[j] + 65; // upper case shift
                         while(x>90)
                        {
                            x = x - 89 - (s[j]%2);
                            x = x+65;
                        }
                    }
                        
                    else if((s[j] %3 == 0 || i==m) && i != m/2)
                    {
                        x =(int) s[j] + 47; // numeric char shift
                         while(x>57)
                        {
                            x = x - 57 + (s[j]%2);
                            x = x+47;
                        }
                    }
 
                    else if((s[j] %2 != 0 && s[j]% 3!=1) || i==m/2)
                    {
                        x =(int) s[j] + 33; // special char shift
                        while(x>47)
                        {
                             x = x - 47 + (s[j]%2);
                             x = x+33;
                        }
                        if(x == 39)
                            x = 64;
                    }
                    
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }








        else if(a=='1' && b =='1'&& c == '0' && d == '1') // upper case and number case and lower case
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x;
                    if((s[j]%2==0 || i==1) && i !=m && i!= m/2)
                    {
                        x =(int) s[j] + 65; // upper case shift
                         while(x>90)
                        {
                            x = x - 89 - (s[j]%2);
                            x = x+65;
                        }
                    }
                        
                    else if((s[j] %3 == 0 || i==m) && i != m/2)
                    {
                        x =(int) s[j] + 47; // numeric char shift
                         while(x>57)
                        {
                            x = x - 57 + (s[j]%2);
                            x = x+47;
                        }
                    }
 
                    else if((s[j] %2 != 0 && s[j]% 3!=1) || i==m/2)
                    {
                        x =(int) s[j] + 97; // lower case shift
                        while(x>122)
                        {
                            x = x - 121 + (s[j]%2);
                            x = x+97;
                        }
                    }
                    
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }









else if(a=='1' && b =='1'&& c == '1' && d == '1') // upper case number case  lower case and numeric
        {
            int i =1;
            while(i<=m)
            {
                for(int j =0; j<l; j++)
                {
                    int x;
                    if((s[j]%2==0 || i==1) && i !=m && i!= m/2 && i != (m/2+1))
                    {
                        x =(int) s[j] + 33; // special char shift
                        while(x>47)
                        {
                             x = x - 47 + (s[j]%2);
                             x = x+33;
                        }
                        if(x == 39)
                            x = 64;
                
                    }
                        
                    else if((s[j] %3 == 2 || s[i]%3 == 0 || i==m/2) && i != (m/2+1) && i!= m)
                    {
                        x =(int) s[j] + 97; // lower case shift
                        while(x>122)
                        {
                            x = x - 121 + (s[j]%2);
                            x = x+97;
                        }
                    }
 
                    else if((s[j] %3 == 1 || i == (m/2 +1)) && i!=m)
                    {
                        x =(int) s[j] + 47; // numeric char shift
                         while(x>57)
                        {
                            x = x - 57 + (s[j]%2);
                            x = x+47;
                        }
                    }

                    else if(((s[j]%3!=1 && s[j]%2!=0) || i==m))
                    {
                        x =(int) s[j] + 65; // upper case shift
                         while(x>90)
                        {
                            x = x - 89 - (s[j]%2);
                            x = x+65;
                        }
                    }
                    
                    cache = x;
                    r.pb(cache);
                    i++;
                    if(i>=m)
                    {
                        break;
                    }
                }
            }

            cout<<r<<endl;
        }






        else
        {
            cout<<"Nothing found"<<endl;
        }
        
      
      
    	adios
    }