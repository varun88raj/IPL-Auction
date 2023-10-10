#include <string>
class details
{
public:
        std::string team_name = "name";
        int no_of_players = 0;
        int no_of_foreign_players=0;
        long long int purse=0;
        int no_of_batsmans=0;
        int no_of_bowlers=0;
        int no_of_All_rounders=0;
        int no_of_wicketkeepers=0;
        details(const std::string& name, int players, int foreign_players,
        long long int team_purse, int batsmans, int bowlers,
        int all_rounders, int wicketkeepers);
        void display() const;
};

