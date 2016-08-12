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

int main(int argc, const char * argv[])
{
    stack<int> stack1;

    stack1.push(2);
    stack1.push(4);
    stack1.push(6);
    cout << "顶部元素为：" << stack1.top() << endl;
    stack1.pop();
    cout << "顶部元素为：" << stack1.top() << endl;

    cout << "stack是否为空：" << stack1.empty() << endl;
    cout << "stack.size:" << stack1.size() << endl;





    return 0;
}
