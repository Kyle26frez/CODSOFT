#include <iostream>

using namespace std;

int main() {

    int cal_mode = 8;
    int go_back = 0;
    float n1, n2, res;
    char op_signe = '0';

    do{
        go_back = 0;
        cout << "------ Calculator -------\n";
        cout << "\n1. basic calcul\n";
        cout << "2. live calculs\n";
        cout << "0. exit\n";
        cout << "\nEnter calcul Mode : ";
        cin >> cal_mode;
        go_back = 0;
        if (cal_mode == 1)
        {
            do{
                cout << "\nnumber 1 : ";
                cin >> n1;
                cout << "number 2 : ";
                cin >> n2;
                /*cout << "\n1. +";
                cout << "\n2. -";
                cout << "\n3. *";
                cout << "\n4. /";*/
                cout << "\n +  -  *  / \n";
                cout << "\n enter operation signe : ";
                cin >> op_signe;
                if(op_signe == '+')
                {
                    res = n1 + n2;
                    cout << "\n------------ \n";
                    cout << n1 << "+" << n2 << " = " << res;
                    cout << "\n------------\n";
                    cout << "\n0. next";
                    cout << "\n1. back calcul mode\n";
                    cout << "\nenter : ";
                    cin >> go_back;
                }
                else if(op_signe == '-')
                {
                    res = n1 - n2;
                    cout << "\n------------ \n";
                    cout << n1 << "-" << n2 << " = " << res;
                    cout << "\n------------\n";
                    cout << "\n0. next";
                    cout << "\n1. back calcul mode\n";
                    cout << "\nenter : ";
                    cin >> go_back;
                }
                else if(op_signe == '*')
                {
                    res = n1 * n2;
                    cout << "\n------------ \n";
                    cout << n1 << "*" << n2 << " = " << res;
                    cout << "\n------------\n";
                    cout << "\n0. next";
                    cout << "\n1. back calcul mode\n";
                    cout << "\nenter : ";
                    cin >> go_back;
                }
                else if(op_signe == '/')
                {
                    res = n1 / n2;
                    cout << "\n------------ \n";
                    cout << n1 << "/" << n2 << " = " << res;
                    cout << "\n------------\n";
                    cout << "\n0. next";
                    cout << "\n1. back calcul mode\n";
                    cout << "\nentry : ";
                    cin >> go_back;
                }
            }while(go_back == 0);
        }


        else if (cal_mode == 2)
        {
            res = 0;
            op_signe = '+';
            n2 = 0;
            cout << "\nEnter first number : ";
            cin >> res;
            do
            {
                cout << "------------------------ ( tap < as operation to exit ))\nMemory : " << res ;
                //cout << "\nCalcul : " << res << op_signe << n2;
                cout << "\nOperation : ";
                cin >> op_signe;
                if(op_signe == '<')
                {
                    return 0;
                }
                cout << "\nnumber : ";
                cin >> n2;
                
                if(op_signe == '+')
                {
                    res = res + n2;
                }
                else if(op_signe == '-')
                {
                    res = res - n2;
                }
                else if(op_signe == '*')
                {
                    res = res * n2;
                }
                else if(op_signe == '/')
                {
                    res = res / n2;
                }
                else if(op_signe == '<')
                {
                    return 0;
                }
                
                
            } while (go_back == 0);
        }

    }while(cal_mode != 0);

    return 0;
}