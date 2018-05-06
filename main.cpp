#include <iostream>
#include <boost/filesystem.hpp>

int main()
{
    boost::filesystem::path path = boost::filesystem::current_path();
    std::cout << path << '\n';

}
