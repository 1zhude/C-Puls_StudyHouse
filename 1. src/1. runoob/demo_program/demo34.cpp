# include<iostream>

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double& serValue(int i)
{
    double& ref = vals[i];
    return ref;// 返回一个引用，ref 应用 vals[i] 
}

int main(int argc, char *argv[])
{
    std::cout << "start\n";
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "vals[" << i << "] = " << vals[i] << "   ";
    }
    std::cout << std::endl;
    
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "serValue(" << i << ") = " << serValue(i) << "   ";
    }
    std::cout << std::endl;

    serValue(1) = 20.23;// 修改数组第二个元素的值
    serValue(3) = 20.23;// 修改数组第4个元素的值
    
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "serValue(" << i << ") = " << serValue(i) << "   ";
    }
    std::cout << std::endl;

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "vals[" << i << "] = " << vals[i] << "   ";
    }
    std::cout << std::endl;

    system("pause");
    return 0;
}