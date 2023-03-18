#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

namespace cv
{
class Mat
{
  private:
    unsigned char data[4] = {0, 0, 0, 0};
    int cols = 2;
    int rows = 2;
    int flags = 0;
    struct
    {
        size_t buf[2] = {5, 5};
        size_t p[1] = {2};
    } step;
};

} // namespace cv

int main(int argc, char* argv[])
{
    int result = Catch::Session().run(argc, argv);
    return result;
}

SCENARIO("Test")
{
    auto test = cv::Mat();
    std::cout << sizeof(test);
}
