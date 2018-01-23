#include <iostream>
#include <string>

namespace Coding
{
    void Test()
    {
        std::string str = std::to_string(8888); // str = "8888"

        auto num = std::stoi(str); // num = int 8888;

        // std::string str2 = "d:\\a\\b";
        std::string str2 = R"(d:\a\b)";

        std::string str3 = R"(<html>
<head>
<title>R</title>
</head>
<body>
</body>
</html)";
    }
}