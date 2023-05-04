#include <stdio.h>
#include <conio.h>
int i;
void Switch_Body(int);

///.......user defined functions..........//

void input(int a[], int c1)
{
    printf("enter %d number", c1);
    for (i = 0; i < c1; i++)
        scanf("%d", &a[i]);
}

void display(int a[], int c1)
{
    printf("\n..your array..\n");
    for (i = 0; i < c1; i++)
        printf("  %d", a[i]);
}
void REVERSE(int a[], int c1)
{
    printf("\n..your array..\n");
    for (i = c1 - 1; i >= 0; i--)
        printf("  %d", a[i]);
}
int sum(int a[], int c1)
{
    int su = 0;
    for (i = 0; i < c1; i++)
        su += a[i];
    return su;
}
void COPY(int a[], int b[], int c1)
{
    for (i = 0; i < c1; i++)
    {
        b[i] = a[i];
    }
}

int count_DUPLICATE(int a[], int c1)
{
    int j, k;
    int c = 0;
    int g;
    int gino = 0;
    int mino = 0;
    for (i = 0; i < c1; i++)
    {
        c = 0;
        for (j = i + 1; j < c1; j++)
        {
            if (a[i] == a[j])
            {
                c = 1;
                for (k = j; k < c1; k++)
                    a[k] = a[k + 1];
                c1--;
                j--;
            }
        }
        if (c == 1)
            gino++;
        else
            mino++;
    }
    printf("enter 1 for count duplicate\nenter 2 for count unique elemnets \n");
    scanf("%d", &g);
    if (g == 1)
        return gino;
    else
        return mino;
}

void PRINT_DUPLICATE(int a[], int c1)
{
    int c, k, j;
    for (i = 0; i < c1; i++)
    {
        c = 0;
        for (j = i + 1; j < c1; j++)
        {
            if (a[i] == a[j])
            {
                c = 1;
                for (k = j; k < c1; k++)
                    a[k] = a[k + 1];
                c1--;
                j--;
            }
        }
        if (c == 1)
        {
            printf("\nyour duplicate == ");
            printf(" %d", a[i]);
        }
        else
        {
            printf("\nyour umique == ");

            printf(" %d", a[i]);
        }
    }
}
void Asort(int a[], int c1)
{
    int j, temp;
    for (i = 0; i < c1; i++)
    {
        for (j = i + 1; j < c1; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void Dsort(int a[], int c1)
{
    int j, temp;
    for (i = 0; i < c1; i++)
    {
        for (j = i + 1; j < c1; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void MEARGE(int a[], int c1, int b[], int c2)
{
    int te = 0;
    int t[50];
    for (i = 0; i < c1; i++)
    {
        t[te++] = a[i];
    }
    for (i = 0; i < c2; i++)
    {
        t[te++] = b[i];
    }
    printf("\n your mearge array");
    Asort(t, te);
    display(t, te);
}

void COUNT_FREQUENCY(int a[], int c1)
{
    int count, j;
    for (i = 0; i < c1; i++)
    {
        count = 1;
        if (a[i] != -11)
        {

            for (j = i + 1; j < c1; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = -11;
                }
            }
            printf("\nfrequency of %d is %d ", a[i], count);
        }
    }
}

int MIN(int a[], int c1)
{
    int min = 1111;
    i = 0;
    while (i < c1)
    {
        if (min > a[i])
            min = a[i];
        i++;
    }
    return min;
}
int MAX(int a[], int c1)
{
    int max = -111;
    i = 0;
    while (i < c1)
    {
        if (max < a[i])
            max = a[i];
        i++;
    }
    return max;
}
void Separte_odd_even(int a[], int c1)
{
    int e[50], o[50], e1 = 0, o1 = 0;
    for (i = 0; i < c1; i++)
    {
        if (a[i] % 2 == 0)
            e[e1++] = a[i];
        else
            o[o1++] = a[i];
    }
    printf("\nyour even= ");
    display(e, e1);
    printf("\nyour odd= ");

    display(o, o1);
}

void insert(int a[], int c1, int val, int index)
{
    for (i = c1; i >= index; i--)
    {
        a[i] = a[i - 1];
    }
    a[i] = val;
    c1++;
    display(a, c1);
}
void DELETE(int a[], int c1, int index)
{
    for (i = index - 1; i < c1; i++)
    {
        a[i] = a[i + 1];
    }
    c1--;
    printf("your new array");
    display(a, c1);
}

int Klargest(int a[], int c1, int mm)
{
    Dsort(a, c1);
    return a[mm - 1];
}

void input2(int c1, int c2, int a1[][c2])
{
    int j;
    printf("\nenter %d * %d elements", c1, c2);
    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &a1[i][j]);
        }
    }
}

void display2(int c1, int c2, int a1[][c2])
{
    int j;
    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("  %d", a1[i][j]);
        }
        printf("\n");
    }
}
void ADD_matrix(int mm, int nn, int a1[][nn], int b2[][nn])
{
    int j;
    int cc[mm][nn];
    for (i = 0; i < mm; i++)
    {
        for (j = 0; j < nn; j++)
        {

            cc[i][j] = a1[i][j] + b2[i][j];
            printf("%d ", cc[i][j]);
        }
        printf("\n");
    }
    printf("\n your added matrix\n");
    display2(mm, nn, cc);
    /*    for (i = 0; i < mm; i++)
        {
            for (j = 0; j < nn; j++)
            {
                printf("%d ", cc[i][j]);
            }
            printf("\n");
        }*/
}
void MUL_matrix(int c1, int c2, int a1[][c2], int mm, int nn, int b2[][nn])
{
    int j, k, sum = 0;
    int cc[50][50];
    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < nn; j++)
        {
            sum = 0;
            for (k = 0; k < mm; k++)
            {
                sum += a1[i][k] * b2[k][j];
            }
            cc[i][j] = sum;
        }
    }
    printf("\n multiplication==\n");
    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < nn; j++)
        {
            printf("%d ", cc[i][j]);
        }
        printf("\n");
    }
    // display2(c1, nn, cc);
}
void tranpose(int c1, int c2, int a1[][c2])
{
    int j;
    for (i = 0; i < c2; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d", a1[j][i]);
        }
        printf("\n");
    }
}

int R_D_sum(int c1, int c2, int a1[][c2])
{

    int sum = 0, j;
    for (i = 0; i < c2; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (j == (c2 - 1) - i)
            {
                sum += a1[i][j];
            }
        }
    }
    return sum;
}

int L_D_sum(int c1, int c2, int a1[][c2])
{
    int sum = 0, j;
    for (i = 0; i < c2; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (j == i)
            {
                sum += a1[i][j];
            }
        }
    }
    return sum;
}

void SUM_OF_ROW(int c1, int c2, int mm[][c2])
{
    int j, co = 0, mo;
    for (i = 0; i < c2; i++)
    {
        co = 0;
        for (j = 0; j < c1; j++)
        {
            co += mm[i][j];
        }
        printf("\nrow sum=%d", co);
    }
}

void SUM_OF_COL(int c1, int c2, int mm[][c2])
{
    int j, co = 0, mo;
    for (i = 0; i < c2; i++)
    {
        co = 0;
        for (j = 0; j < c1; j++)
        {
            co += mm[j][i];
        }
        printf("\ncol sum=%d", co);
    }
}

void LOWER_TRA_MATRIX(int c1, int c2, int a1[][c2])
{
    int j;
    for (i = 0; i < c2; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (j < i)
                a1[i][j] = 0;
        }
    }
    display2(c1, c2, a1);
}

void UPPER_TRA_MATRIX(int c1, int c2, int a1[][c2])
{
    int j;
    for (i = 0; i < c2; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (j > i + 1)
                a1[i][j] = 0;
        }
    }
    display2(c1, c2, a1);
}

void CHECK_SPARSE(int c1, int c2, int a1[][c2])
{
    int j, count = 0;
    for (i = 0; i < c2; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (a1[i][j] == 0)
                count++;
        }
    }
    if (count > (c1 * c2) / 2)
        printf("\n///yes it is sparse/// ");
    else
        printf("\n///no it is not sparse/// ");
}

void CHECK_EQUAL(int c1, int c2, int a1[][c2], int mm, int nn, int b2[][nn])
{
    int j, count = 0;
    for (i = 0; i < c2; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (a1[i][j] != b2[i][j])
                count = 1;
        }
    }
    if (count == 1)
        printf("\n///they are not equal/// ");
    else
        printf("\n///they are  equal/// ");
}

void CHECK_IDENTITY(int c1, int c2, int a1[][c2])
{
    int j, count = 0;
    int cc = 0;
    for (i = 0; i < c2; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (i == j)
            {
                if (a1[i][j] != 1)
                    count = 1;
            }
            else
            {
                if (a1[i][j] != 0)
                    cc = 1;
            }
        }
    }
    if (count == 0 && cc == 0)
        printf("\nyes it is identity matrix");
    else
        printf("\nno it is identity matrix");
}

void  PAIR_OF_SUM(int a[],int c1)
{
    
}
//..............main function .........user..//
int main()
{
    int A;
    while (1)
    {
        A = 1;
        printf("\n%d -> INPUT-OUTPUT", A++);
        printf("\n%d -> REVERSE  ", A++);
        printf("\n%d -> SUM OF ARRAYS ELEMENTS", A++);
        printf("\n%d -> COPY TO 2ND ARRAY", A++);
        printf("\n%d -> COUNT ..DUPLICATE OR UNIQUE.. ELEMNETS IN ARRAY", A++);
        printf("\n%d -> PRINT DUPLICATE AND UNIQUE", A++);
        printf("\n%d -> MEARGE  2 ARRAYS AND SHORT", A++);
        printf("\n%d -> COUNT FREQUENCY OF EACH ELEMENTS OF ARRAY", A++);
        printf("\n%d -> MAX AND MIN IN ARRAY", A++);
        printf("\n%d -> Separte_odd_even in array", A++);
        printf("\n%d -> INSERT A ELEMENT IN ARRAY", A++);
        printf("\n%d -> DELETE A ELEMENT IN ARRAY", A++);
        printf("\n%d -> Kth LARGEST ELEMENT", A++);
        printf("\n%d -> 2D ARRAY INPUT-OUTPUT", A++);
        printf("\n%d -> ADDTION OF MATRIX", A++);
        printf("\n%d -> MULTIPLICAION OF MATRIX", A++);
        printf("\n%d -> TRANSPOSE OF MATRIX", A++);
        printf("\n%d -> SUM OF RIGHT AND LEFT DIAGONAL OF MATRIX", A++);
        printf("\n%d -> SUM OF ROW AND COLUME OF MATRIX", A++);
        printf("\n%d -> PRINT LOWER & UPPER-TRIANGULAR MATRIX", A++);
        printf("\n%d -> CHECK SPARSE MATRIX", A++);
        printf("\n%d -> CHECK TWO MATRIX ARE THEY EQUAL", A++);
        printf("\n%d -> CHECK IDENTITY MATRIX", A++);
       

        int choice;
        printf("\n...........enter your choice........\n");
        scanf("%d", &choice);
        Switch_Body(choice);
        printf("enter 0 for break\n enter any number for countinue\n");
        int be;
        scanf("%d", &be);
        if (be == 0)
            break;
    }
    printf("\n..completed..thankyou....");
    return 0;
}

///......switch ...func...//////
void Switch_Body(int ch)
{
    int val, index;
    int aa = 1;
    int a[50], b[50], a1[10][10], b2[10][10];
    int c1, c2, c3;
    int mm, nn;
    switch (ch)
    {
    case 1:

        printf("enter size of array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);
        break;
    case 2:
        printf("enter size of array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);
        REVERSE(a, c1);
        break;
    case 3:
        printf("enter size of array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);
        printf("\nSUM = %d", sum(a, c1));
        break;
    case 4:
        printf("enter size of array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);
        COPY(a, b, c1);
        printf("copy array =");
        display(b, c1);

        break;
    case 5:
        printf("enter size of array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);
        printf("\n elemnets counted in array=%d \n", count_DUPLICATE(a, c1));

        break;
    case 6:
        printf("enter size of array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);
        PRINT_DUPLICATE(a, c1);
        break;
    case 7:
        printf("enter size of 1 array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);
        printf("enter size of 2 array");
        scanf("%d", &c2);
        input(b, c2);
        display(b, c2);
        MEARGE(a, c1, b, c2);
        break;
    case 8:
        printf("enter size of 1 array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);
        COUNT_FREQUENCY(a, c1);
        break;
    case 9:
        printf("\npress 1. for min");
        printf("\npress 2. for max");
        scanf("%d", &c3);
        printf("enter size of 1 array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);

        if (c3 == 1)
            printf("\n MIN element of array = %d ", MIN(a, c1));
        else
            printf("\n MAX element of array = %d ", MAX(a, c1));

        break;
    case 10:
        printf("enter size of  array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);
        Separte_odd_even(a, c1);
        break;
    case 11:
        printf("enter size of  array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);
        printf("enter value and index");
        scanf("%d%d", &val, &index);
        insert(a, c1, val, index);
        break;
    case 12:
        printf("enter size of  array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);
        printf("enter value and index");
        scanf("%d", &index);
        DELETE(a, c1, index);

        break;
    case 13:
        printf("\nenter size of  array");
        scanf("%d", &c1);
        input(a, c1);
        display(a, c1);
        printf("\nenter the kth number ");
        scanf("%d", &mm);
        printf("\n your Kth largest number= %d", Klargest(a, c1, mm));
        break;
    case 14:
        printf("\nenter order of matrix");
        scanf("%d%d", &c1, &c2);
        input2(c1, c2, a1);
        display2(c1, c2, a1);
        break;
    case 15:
        printf("\nenter order of 1 matrix");
        scanf("%d%d", &c1, &c2);
        input2(c1, c2, a1);
        display2(c1, c2, a1);
        printf("\nenter order of 2 matrix");
        scanf("%d%d", &mm, &nn);
        if (c1 == mm && c2 == nn)
        {
            input2(mm, nn, b2);
            display2(mm, nn, b2);
            ADD_matrix(mm, nn, a1, b2);
        }
        else
            printf("\ninvalid order");

        break;
    case 16:
        printf("\nenter order of 1 matrix");
        scanf("%d%d", &c1, &c2);
        input2(c1, c2, a1);
        display2(c1, c2, a1);
        printf("\nenter order of 2 matrix");
        scanf("%d%d", &mm, &nn);
        if (c2 == mm)
        {
            input2(mm, nn, b2);
            display2(mm, nn, b2);
            MUL_matrix(c1, c2, a1, mm, nn, b2);
        }
        else
            printf("\ninvalid order");

        break;
    case 17:
        printf("\nenter order of matrix");
        scanf("%d%d", &c1, &c2);
        input2(c1, c2, a1);
        display2(c1, c2, a1);
        tranpose(c1, c2, a1);
        break;
    case 18:
        printf("\nenter order of matrix");
        scanf("%d%d", &c1, &c2);
        input2(c1, c2, a1);
        display2(c1, c2, a1);
        printf("\npress 1 for sum of right diagnol");
        scanf("%d", &mm);
        if (mm == 1)
        {
            printf("\n sum of right diagonal=%d", R_D_sum(c1, c2, a1));
        }
        else
        {
            printf("\n sum of right diagonal=%d", L_D_sum(c1, c2, a1));
        }
        break;
    case 19:
        printf("\nenter order of matrix");
        scanf("%d%d", &c1, &c2);
        input2(c1, c2, a1);
        display2(c1, c2, a1);
        printf("\npress 1 for sum of row");
        scanf("%d", &mm);
        if (mm == 1)
        {
            SUM_OF_ROW(c1, c2, a1);
        }
        else
        {
            SUM_OF_COL(c1, c2, a1);
        }
        break;
    case 20:
        printf("\nenter order of matrix");
        scanf("%d%d", &c1, &c2);
        input2(c1, c2, a1);
        display2(c1, c2, a1);
        printf("\npress 1 to print lower tringular matrix\npress 2 to print upper tringular");
        scanf("%d", &mm);
        if (mm == 1)
        {
            LOWER_TRA_MATRIX(c1, c2, a1);
        }
        else
        {
            UPPER_TRA_MATRIX(c1, c2, a1);
        }

        break;
    case 21:
        printf("\nenter order of matrix");
        scanf("%d%d", &c1, &c2);
        input2(c1, c2, a1);
        display2(c1, c2, a1);
        CHECK_SPARSE(c1, c2, a1);
        break;
    case 22:
        printf("\nenter order of 1 matrix");
        scanf("%d%d", &c1, &c2);
        input2(c1, c2, a1);
        display2(c1, c2, a1);
        printf("\nenter order of 2 matrix");
        scanf("%d%d", &mm, &nn);
        input2(mm, nn, b2);
        display2(mm, nn, b2);
        if (c1 == mm && c2 == nn)
            CHECK_EQUAL(c1, c2, a1, mm, nn, b2);
        else
            printf("\ninvalide order");
        break;
    case 23:
        printf("\nenter order of matrix");
        scanf("%d%d", &c1, &c2);
        input2(c1, c2, a1);
        display2(c1, c2, a1);
        if (c1 == c2)
            CHECK_IDENTITY(c1, c2, a1);
        else
            printf("\ninvalide order");
        break;
    default:
        printf("\nmera koi nahi");
    }
}
