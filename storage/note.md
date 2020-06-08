存储类定义 C 程序中变量/函数的范围（可见性）和生命周期。
这些说明符放置在它们所修饰的类型之前。
下面列出 C 程序中可用的存储类：

auto
register
static
extern

auto存储类
```
int mount;

auto int month;

```
上面的实例定义了两个带有相同存储类的变量
auto只能用在函数内
即auto只能修饰局部变量

register存储类

register存储类用于定义存储在寄存器中而不是RAM中的局部变量
