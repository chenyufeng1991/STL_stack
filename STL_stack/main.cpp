//
//  main.cpp
//  STL_stack
//
//  Created by chenyufeng on 8/12/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

/**
 *  stack不提供任何的迭代器操作。
 *  从stack的内部实现看，stack是不设置最大容量的，可通过size函数获取当前stack的大小。
 *
 */
int main(int argc, const char * argv[])
{
    stack<int> stack1; // 默认构造函数
    stack<int> stack2(stack1); // 复制构造函数

    stack1.push(2);
    stack1.push(4);
    stack1.push(6);
    cout << "顶部元素为：" << stack1.top() << endl;
    stack1.pop(); // 出栈操作是不返回栈顶元素的
    cout << "顶部元素为：" << stack1.top() << endl;

    cout << "stack是否为空：" << stack1.empty() << endl;
    cout << "stack.size:" << stack1.size() << endl;





    return 0;
}
