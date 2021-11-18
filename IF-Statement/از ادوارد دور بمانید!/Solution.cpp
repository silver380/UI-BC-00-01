#include <iostream>
using namespace std;

int main()
{
    bool cough_regulary;
    cin >> cough_regulary;

    if (cough_regulary)
    {
        bool oxygen_under_90;
        cin >> oxygen_under_90;

        if (oxygen_under_90)
        {
            bool temptature_normal;
            cin >> temptature_normal;

            if (temptature_normal)
                cout << "The possibility of his infection is really low!" << endl;

            else
            {
                bool lungs_involved;
                cin >> lungs_involved;

                if (lungs_involved)
                    cout << "he is effected and must be taken care of and checked each hour." << endl;
                else
                    cout << "he is effected, but his situation is not that bad!" << endl;
            }
        }

        else
        {
            bool have_allergy;
            cin >> have_allergy;

            if (have_allergy)
                cout << "The possibility of his infection is really low!" << endl;
            else
            {
                bool temptature_normal;
                cin >> temptature_normal;

                if (temptature_normal)
                    cout << "The possibility of his infection is really low!" << endl;

                else
                {
                    bool lungs_involved;
                    cin >> lungs_involved;

                    if (lungs_involved)
                        cout << "he is effected and must be taken care of and checked each hour." << endl;
                    else
                        cout << "he is effected, but his situation is not that bad!" << endl;
                }
            }
        }
    }

    else
        cout << "The possibility of his infection is really low!" << endl;

    return 0;
}