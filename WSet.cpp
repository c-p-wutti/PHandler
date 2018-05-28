//
//  WSet.cpp
//  PHandler
//
//  Created by Christopher Peter Wutti on 27/05/2018.
//  Copyright © 2018 Christopher Peter Wutti. All rights reserved.
//

#include "WSet.hpp"

WSet::WSet(std::string key, std::function<void()> function)
{
    keyword = key;
    func = function;
}

std::string WSet::get_keyword()
{
    return keyword;
}

void WSet::execute_function()
{
    func();
}
