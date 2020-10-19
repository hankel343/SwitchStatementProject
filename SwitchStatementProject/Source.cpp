#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char choice = 'A';
    float num;
    vector <int> list;

    while (choice != 'Q' && choice != 'q')
    {
        cout << "##########\n";
        cout << "MENU\n";
        cout << "##########\n";
        cout << "P - Print numbers\n";
        cout << "A - Add a number\n";
        cout << "M - Display mean of the numbers\n";
        cout << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n";
        cout << "Q - Quit\n\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 'P':
        {
            cout << "The numbers in the list so far are: \n";
            if (list.empty())
            {
                cout << "The vector is empty currently.\n\n";
            }
            else
                for (auto value : list)
                {
                    cout << "{" << value << "}";
                }
            cout << "\n\n";
            break;
        }

        case 'p':
        {
            cout << "The numbers in the list so far are: \n";
            if (list.empty())
            {
                cout << "The vector is empty currently.\n\n";
            }
            else
                for (auto value : list)
                {
                    cout << "{" << value << "}";
                }
            cout << "\n\n";
            break;
        }

        case 'A':
        {
            cout << "Enter a number: ";
            cin >> num;
            list.push_back(num);
            cout << "\n\n";
            break;
        }

        case 'a':
        {
            cout << "Enter a number: ";
            cin >> num;
            list.push_back(num);
            cout << "\n\n";
            break;
        }

        case 'M':
        {
            float sum{ 0 };
            float mean{ 0 };

            for (auto value : list)
            {
                sum = sum + value;
            }
            mean = sum / list.size();

            cout << "The mean of the numbers in the list are: \n";
            cout << mean;
            cout << "\n\n";
            break;
        }

        case 'm':
        {
            float sum{ 0 };
            float mean{ 0 };

            for (auto value : list)
            {
                sum = sum + value;
            }
            mean = sum / list.size();

            cout << "The mean of the numbers in the list are: \n";
            cout << mean;
            cout << "\n\n";
            break;
        }

        case 'S':
        {
            int min = list[0];

            for (int i = 1; i < list.size(); ++i)
            {
                if (list[i] < min)
                    min = list[i];
            }

            cout << "The smallest number in the list is: \n";
            cout << min;
            cout << "\n\n";

            break;

        }

        case 's':
        {
            int min = list[0];

            for (int i = 1; i < list.size(); ++i)
            {
                if (list[i] < min)
                    min = list[i];
            }

            cout << "The smallest number in the list is: \n";
            cout << min;
            cout << "\n\n";

            break;
        }

        case 'L':
        {
            int max = list[0];

            for (int i = 1; i < list.size(); ++i)
            {
                if (list[i] > max)
                    max = list[i];
            }

            cout << "The largest number in the list is: \n";
            cout << max;
            cout << "\n\n";
            break;
        }

        case 'l':
        {
            int max = list[0];

            for (int i = 1; i < list.size(); ++i)
            {
                if (list[i] > max)
                    max = list[i];
            }

            cout << "The largest number in the list is: \n";
            cout << max;
            cout << "\n\n";

            break;
        }

        case 'Q':
        {
            cout << "Goodbye...\n";
            system("pause");
            return 1;
        }

        case 'q':
        {
            cout << "Goodbye...\n";
            system("pause");
            return 1;
        }

        default: cout << "Unknown choice, try again.\n";
        }
    }

    return 0;
}