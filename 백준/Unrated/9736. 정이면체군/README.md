# [Unrated] 정이면체군 - 9736 

[문제 링크](https://www.acmicpc.net/problem/9736) 

### 성능 요약

메모리: 30840 KB, 시간: 72 ms

### 분류

구현(implementation), 수학(math)

### 문제 설명

<p>정이면체군은 집합 D로, D상에서 곱셈 연산 *가 정의되어 있다. 집합 D는 두 원소 a와 b를 이용해 만들 수 있다. 곱셈 연산 *는 실제로 표기하는 경우는 거의 없고, 붙여서 쓰거나 제곱 형태로 나타낸다. 즉, a*a는 aa 또는 a<sup>2</sup>로 나타낸다. 또, a*a*b는 a<sup>2</sup>b<sup>1</sup> 또는 a<sup>2</sup>b로 나타낸다.</p>

<p>정이면체군 D는 두 파라미터 m과 n을 갖고, m ≥ 2, n ≥ 2이다. 이러한 정이면체군은 D<sub>m,n</sub>으로 나타낸다. D<sub>m,n</sub>사이의 관계는 다음과 같다.</p>

<p>a<sup>m</sup> = a<sup>0</sup> = 1, b<sup>n</sup> = b<sup>0</sup> = 1, and ba = a<sup>(m-1)</sup>b.</p>

<p>따라서, D<sub>m,n</sub>은 총 (mn)개의 원소를 가지며, 다음과 같다.</p>

<p>D<sub>m,n</sub> = {a<sup>j</sup>bk | 0 ≤ j < m, 0 ≤ k < n} = {a<sup>0</sup>b<sup>0</sup>, a<sup>1</sup>b<sup>0</sup>, a<sup>2</sup>b<sup>0</sup>, ..., a<sup>(m-1)</sup>b<sup>0</sup>, ..., a<sup>(m-1)</sup>b<sup>(n-1)</sup>}.</p>

<p>예를 들어, m=6, n=2인 경우 D<sub>7,2</sub>는 다음과 같다.</p>

<p>{a<sup>0</sup>b<sup>0</sup>, a<sup>1</sup>b<sup>0</sup>, a<sup>2</sup>b<sup>0</sup>, a<sup>3</sup>b<sup>0</sup>, a<sup>4</sup>b<sup>0</sup>, a<sup>5</sup>b<sup>0</sup>, a<sup>6</sup>b<sup>0</sup>, a<sup>0</sup>b<sup>1</sup>, a<sup>1</sup>b<sup>1</sup>, a<sup>2</sup>b<sup>1</sup>, a<sup>3</sup>b<sup>1</sup>, a<sup>4</sup>b<sup>1</sup>, a<sup>5</sup>b<sup>1</sup>, a<sup>6</sup>b<sup>1</sup>}.</p>

<p>곱셉 연산은 교환 법칙이 성립하지 않기 때문에, ba ≠ ab이다. D<sub>7,2</sub>의 정의에 의하면 ba = a<sup>6</sup>b이다. 또, a<sup>j</sup>a<sup>k</sup> = a<sup>(j+k)%m</sup>, b<sup>j</sup>b<sup>k</sup> = b<sup>(j+k)%n</sup> 이다. 따라서 다음과 같다.</p>

<p>(a<sup>j</sup>b<sup>k</sup>)(a<sup>p</sup>b<sup>q</sup>) ≠ (a<sup>(j+p)%m</sup>b<sup>(k+q)%n</sup>)</p>

<p>D<sub>7,2</sub>의 두 원소 (a<sup>3</sup>b<sup>1</sup>)과 (a<sup>2</sup>b<sup>1</sup>)을 올바르게 곱하는 방법은 다음과 같다.</p>

<p>(a<sup>3</sup>b<sup>1</sup>)(a<sup>2</sup>b<sup>1</sup>) = (a<sup>3</sup>b<sup>0</sup>)(ba)(a<sup>1</sup>b<sup>1</sup>) = (a<sup>3</sup>b<sup>0</sup>)(a<sup>6</sup>b<sup>1</sup>)(a<sup>1</sup>b<sup>1</sup>)</p>

<p>ba = a<sup>6</sup>b이때문에 위와 같이 계산할 수 있다. 또, a<sup>3</sup>b<sup>0</sup>a<sup>6</sup> = a<sup>3</sup>a<sup>6</sup> = a<sup>(3+6)%7</sup> = a<sup>2</sup>이기 때문에, (a<sup>3</sup>b<sup>0</sup>)(a<sup>6</sup>b<sup>1</sup>) = (a<sup>2</sup>b<sup>1</sup>)임을 알 수 있다. 따라서, 다음과 같이 계산할 수 있다.</p>

<p>(a<sup>3</sup>b<sup>0</sup>)(a<sup>6</sup>b<sup>1</sup>)(a<sup>1</sup>b<sup>1</sup>) = (a<sup>2</sup>b<sup>1</sup>)(a<sup>1</sup>b<sup>1</sup>).</p>

<p>이제, 위의 식을 아래와 같이 다시 계산할 수 있다.</p>

<p>(a<sup>2</sup>b<sup>1</sup>)(a<sup>1</sup>b<sup>1</sup>) = (a<sup>2</sup>b<sup>0</sup>)(ba)(a<sup>0</sup>b<sup>1</sup>) = (a<sup>2</sup>b<sup>0</sup>)(a<sup>6</sup>b<sup>1</sup>)(a<sup>0</sup>b<sup>1</sup>) = (a<sup>8</sup>b<sup>2</sup>) = (a<sup>1</sup>b<sup>0</sup>)</p>

<p>따라서, (a<sup>3</sup>b<sup>1</sup>)과 (a<sup>2</sup>b<sup>1</sup>)을 곱하면 (a<sup>3</sup>b<sup>1</sup>)(a<sup>2</sup>b<sup>1</sup>) = (a<sup>1</sup>b<sup>0</sup>)이 된다.</p>

<p>m과 n 그리고, 정이면체군 D<sub>m,n</sub> 상의 두 원소 (a<sup>j</sup>b<sup>k</sup>)와 (a<sup>p</sup>b<sup>q</sup>)가 주어졌을 때, 곱한 결과를 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p>입력은 여러 개의 문제 세트로 이루어져 있다. 각 문제 세트는 입력 여러 줄로 이루어져 있다.</p>

<p>첫째 줄에는 문제ID와 m, n,p 가 주어지며, 공백으로 구분되어져 있다. m과 n은 1000을 넘지 않는 정수이고, p는 그 문제 세트에 있는 곱셈 문제의 개수이다. 다음 p개 줄에는 곱셈 문제가 주어지며, D<sub>m,n</sub> 상의 두 원소가 주어진다. 각 원소는 a3b1형식이다. 각 문제 세트의 다음에는 바로 다음 문제 세트가 주어진다. 문제ID가 ZZ인 경우에는 입력의 끝을 나타낸다.</p>

### 출력 

 <p>각각의 곱셈 문제에 대해서, 다음을 출력한다.</p>

<p>ProblemID id: ajbk * apbq = arbs</p>

<p>id는 입력으로 주어진 문제ID, ajbk, apbq는 입력으로 주어진 두 원소, arbs는 결과이다.</p>

