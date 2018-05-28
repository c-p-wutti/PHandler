//
//  PHandler.cpp
//  PHandler
//
//  Created by Christopher Peter Wutti on 28/05/2018.
//  Copyright © 2018 Christopher Peter Wutti. All rights reserved.
//

#include "PHandler.hpp"

PHandler::PHandler()
{
    
}

void PHandler::add_WSet(WSet::WSet new_set)
{
    list_of_commands.push_back(new_set);
}

WSet PHandler::get_WSet_at_Position(int pos)
{
    if(pos < list_of_commands.size())
        return list_of_commands[pos];
    else
        return WSet("Position is not in the vector", NULL);
}

void PHandler::eval_Command(std::string command)
{
    int upperBound = (int) list_of_commands.size();
    
    for(int i = 0; i < upperBound; i++)
    {
        WSet set = get_WSet_at_Position(i);
        std::string keyword = set.get_keyword();
        
        if(command.find(keyword) != std::string::npos)
        {
            set.execute_function();
        }
    }
}
