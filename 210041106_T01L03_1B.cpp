#include<iostream>
using namespace std;

class Counter
{
private:
    int count, inc_step;
public:
    void resetCount()
    {
        count=0;
    }
    void setIncrementStep(int step_val)
    {
        inc_step=step_val;
    }
    void increment()
    {
        count+=inc_step;
    }
    int getCount()
    {
        return count;
    }
};
int main()
{
    Counter test;
    int step;
    cin>>step;
    test.setIncrementStep(step);
    test.getCount();
    test.increment();
    test.resetCount();
}
