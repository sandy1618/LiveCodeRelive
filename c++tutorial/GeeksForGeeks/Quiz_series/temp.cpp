#include <iostream>

class args
{
public:
    int a;
    args(int x) : a(x) {}
    ~args()
    {
        std::cout << "Delete args : " << this->a << std::endl;
    }
};

class func
{
public:
    args *arg;
    func();
    ~func();
};

func::func() : arg(new args(8))
{
}

// This is the destructor.
func::~func()
{
    std::cout << "Delete Function : " << this->arg->a << std::endl;
}

int main(void)
{
    func *function = new func();

    // Note this -->
    // delete function->arg;
    delete function;
    return 0;
}

// no. of pointers used inside a class should be least.