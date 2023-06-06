#include <iostream>
using namespace std;
namespace first_namespace
{
    void masala()
    {
        cout << "This is masala\n";
    }

    namespace chatni
    {
        void pickle()
        {
            cout << "You are so delicious Pickle\n";
        }

        namespace aalu
        {
            void samosa()
            {
                cout << "This is aalu\n";
            }

            namespace water
            {
                void pani()
                {
                    cout << "This is water.";
                }
            }
        }
    }
}
using namespace first_namespace;
using namespace first_namespace::chatni;
using namespace first_namespace::chatni::aalu;
using namespace first_namespace::chatni::aalu::water;
int main()
{
    masala();
    pickle();
    samosa();
    pani();
    return 0;
}