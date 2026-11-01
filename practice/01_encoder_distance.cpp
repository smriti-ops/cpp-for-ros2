# include <iostream>
#include <cstdint>
int main(){
    constexpr double kWheelRadius=0.05;
    const int kTicksperRev=1024;

    std::int32_t ticks{2048};
    double revolution=static_cast<double>(ticks)/kTicksperRev;
    double distance= revolution*2.0*3.14159*kWheelRadius;

    bool moved=distance>0.0;
    char unit='m';
    auto count=3;
    std::cout<<"Revolutions: "<<revolution<<"\n";
    std::cout<<"Distance: "<<distance<<" "<<unit<<"\n";
    std::cout<<"Moved? "<<std::boolalpha<<moved<<"\n";
    int truncated = static_cast<int>(distance * 100);  // cm, fraction dropped
    std::cout << "Truncated cm: " << truncated << "\n";
    std::cout << "sizeof(double) = " << sizeof(double) << " bytes\n";
    std::cout << "count + 1 = " << count + 1 << "\n";
    return 0;
}