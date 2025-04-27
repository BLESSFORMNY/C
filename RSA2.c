#include <stdio.h>

long long mod_pow(long long base, long long exponent, long long mod) // 모듈러 거듭제곱 함수 
{
    long long result = 1;

    for (long long l = 0; l < exponent; l++) // l을 0부터 시작 안하면 첫 번째 계산을 빠뜨리게 됨 
    {
        result = (result * base) % mod; // base를 곱할때 마다 모듈러 연산을 통해 값을 최대한 작게 유지 -> 모듈러 연산에서는 분배법칙, 결합법칙을 따르므로 문제X 
    }

    return result;
}

int main()
{
    long long p, q;
    long long N, phi;
    long long e, d;
    long long plaintext, cipher;
    int i, j, k;
    int prime_p, prime_q, e_phi, d_ephi, pt_N;

    while (1) // p, q 입력, p, q의 소수 판별
    {
        printf("임의의 두 소수 p, q를 순서대로 입력해주세요\n");
        printf("p: ");
        scanf("%lld", &p);

        prime_p = 1;

        if (p < 2)
        {
            prime_p = 0;
        }

        for (i = 2; i * i <= p; i++)
        {
            if (p % i == 0)
            {
                prime_p = 0;
                break;
            }
        }

        if (prime_p != 1)
        {
            printf("\np는 소수가 아닙니다. 다시 입력해주세요.\n\n");
            continue;
        }

        printf("q: ");
        scanf("%lld", &q);

        prime_q = 1;

        if (q < 2)
        {
            prime_q = 0;
        }

        for (j = 2; j * j <= q; j++)
        {
            if (q % j == 0)
            {
                prime_q = 0;
                break;
            }
        }

        if (prime_q != 1)
        {
            printf("\nq는 소수가 아닙니다. 다시 입력해주세요.\n\n");
            continue;
        }

        break;
    }

    N = p * q;
    phi = (p - 1) * (q - 1);

    while (1) // e 입력, e와 phi(N) 서로소 판별
    {
        printf("phi(N) = %lld보다 작은 phi(N)의 서로소 e를 입력해주세요.\n", phi);
        printf("e: ");
        scanf("%lld", &e);

        e_phi = 1;

        for (k = 2; k < phi; k++)
        {
            if (e % k == 0 && phi % k == 0)
            {
                e_phi = 0;
                break;
            }
        }

        if (e_phi != 1)
        {
            printf("\ne와 phi(N)은 서로소가 아닙니다. 다시 입력해주세요.\n\n");
            continue;
        }

        break;
    }

    while (1) // d 입력, d의 조건(ed를 phi(N)으로 나눈 나머지 1) 판별
    {
        printf("ed를 phi(N) = %lld으로 나눈 나머지가 1이 되는 수 d를 입력해주세요.\n", phi);
        printf("d: ");
        scanf("%lld", &d);

        d_ephi = 1;

        if (e * d % phi != 1)
        {
            d_ephi = 0;
        }

        if (d_ephi != 1)
        {
            printf("\ned를 phi(N)으로 나눈 나머지가 1이 아닙니다. 다시 입력해주세요.\n\n");
            continue;
        }

        break;
    }

    while (1) // 평문 입력, 평문의 조건(N보다 작은 수) 판별
    {
        printf("암호화하고 싶은 평문(숫자)을 입력해주세요.\n");
        printf("plaintext: ");
        scanf("%lld", &plaintext);

        pt_N = 1;

        if (plaintext >= N)
        {
            pt_N = 0;
        }

        if (pt_N != 1)
        {
            printf("\n평문은 N = %lld보다 작아야 합니다. 다시 입력해주세요.\n\n", N);
            continue;
        }

        break;
    }

    cipher = mod_pow(plaintext, e, N);

    printf("암호문: %lld", cipher);

    return 0;
}
