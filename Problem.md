# DNA序列修正
***
### 问题描述

在生物学中， DNA 序列的相似性常被用来研究物种间的亲缘关系。  

现在我们有两条 DNA 序列，每条序列由 A，C，G，T 四种字符组成，长度相同。但是现在我们记录的 DNA 序列存在错误，为了严格满足 DNA 序列的碱基互补配对，即 A—T 和 G—C ，我们需要依据第一条 DNA 序列，对第二条DNA序列进行以下操作：  

* 1. 选择第二条 DNA 序列的任意两个位置，交换他们的字符。
  
* 2. 选择第二条DNA序列任意一个位置，将其字符替换为 A,C,G,T 中的任何一个。

需要注意的是每个位置上的碱基 ***只能被操作一次***  

你的任务是通过最小的操作次数，使第二条 DNA 序列和第一条 DNA 序列互补，并且已知初始两条 DNA 序列长度均为 N 。  

### 输入格式

第一行包含一个整数 N ，(1 <= N <= 10^3),表示DNA序列的长度。  

接下来的两行，每行包含一个长度为 N 的字符串，表示两条 DNA 序列。  

### 输出格式

输出一个整数，表示让第二条 DNA 序列和第一条 DNA 序列互补所需的最小操作次数。  

### 样例输入

5  
ACGTG  
ACGTC  

### 样例输出
2  

### 样例说明

将第二条 DNA 序列中的第一个和第四个碱基交换，将第二个和第三个碱基交换即可完成全部配对，共操作两次。  

### 运行限制

<table>
  <tr>
    <th>语言</th>
    <th>最大运行时间</th>
    <th>最大运行内存</th>
  </tr>
  <tr>
    <th>C++</th>
    <th>1s</th>
    <th>128M</th>
  </tr>
  <tr>
    <th>C</th>
    <th>1s</th>
    <th>128M</th>
  </tr>
  <tr>
    <th>Java</th>
    <th>2s</th>
    <th>128M</th>
  </tr>
  <tr>
    <th>Python3</th>
    <th>3s</th>
    <th>128M</th>
  </tr>
</table>
