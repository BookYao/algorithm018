[toc]

### 第三周 分治和回溯

#### 递归的模板

```
def recursion(level, param1, param2, ...):
    # recursion terminator 递归终结条件
    if level > MAX_LEVEL:
        process_result
        return
            
    # process logic in current level 处理当前层逻辑
    process(level, data, ...)
    
    # drill down 下探到下一层
    self.recusion(level + 1, p1, ...)
    
    # reverse the current level status if needed 清理当前层
```



经过老师的讲解，递归的模板看着很清晰，但是碰到实际的题目，一步一步去寻找终结条件，总会陷入人肉递归的过程中，还得再梳理一番思路。



一些简单的递归能想明白，但是一下复杂的实际题目，感觉还是比较费劲，在做组合这个题目的时候，一时想不太明白，再多看几遍题解吧，再联系一番。

