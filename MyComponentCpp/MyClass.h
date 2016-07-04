#pragma once

namespace MyComponentCpp
{
	public delegate Platform::String^ MyFunc(int a, int b);
    public ref class MyClass sealed
    {
    public:
        MyClass();
		static Platform::String^ MyMethod(MyFunc^ func)
		{
			Platform::String^ abc=func(4, 5);
			return abc;
		}
    };
}
