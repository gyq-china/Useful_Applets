/*
@brief:
        description: 计算两个矩阵相乘，两个矩阵分别按行转为1维数组
        @input:_matrix1：size:_m*_l;_matrix2：size:_l*_n then transform to One-dimensional;
        @output:m*n ayyay and in One-dimensional formatation;
*/
static void MatMultiply(const float* _matrix1, const float* _matrix2, float* _matrixOut,
    const int _m, const int _l, const int _n)
{
    float tmp;
    int i, j, k;
    for (i = 0; i < _m; i++)
    {
        for (j = 0; j < _n; j++)
        {
            tmp = 0.0f;
            for (k = 0; k < _l; k++)
            {
                tmp += _matrix1[_l * i + k] * _matrix2[_n * k + j];
            }
            _matrixOut[_n * i + j] = tmp;
        }
    }
}
