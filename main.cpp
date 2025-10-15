#include <iostream>
using namespace std;

int main() {
    int N, M, i, j, t, k;
    bool scambio;
    cout<<"Quanti numeri vuoi inserire?"<<endl;
    cin>>N;
    cin>>M;
    int v1[N];
    int v2[M];
    int v3[N+M];
    i=0;
    while(i<=N-1)
    {
        v1[i]=random()%N*10+1;
        v2[i]=random()%M*10+1;
        i=i+1;
    }
    i=0;
    scambio=true;
    while(i<=N-1 & scambio)
    {
        scambio=false;
        j=0;
        while(j<=(N-2)-i)
        {
            if(v1[j]>v1[j+1])
            {
                t=v1[j];
                v1[j]=v1[j+1];
                v1[j+1]=t;
                scambio=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    i=0;
     while(i<=M-1 & scambio)
    {
        scambio=false;
        j=0;
        while(j<=(M-2)-i)
        {
            if(v2[j]>v2[j+1])
            {
                t=v2[j];
                v2[j]=v2[j+1];
                v2[j+1]=t;
                scambio=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    i=0;
    while(i<=N-1)
    {
        cout<<"Il "<<i+1<<"° numero del primo vettore è "<<v1[i]<<endl;
        i=i+1;
    }
    while(i<=M-1)
    {
        cout<<"Il "<<i+1<<"° numero del secondo vettore è "<<v2[i]<<endl;
        i=i+1;
    }
    k=0;
    i=0;
    j=0;
    while(i<=N-1 & j<=N-1)
    {
        if(v1[i]<=v2[j])
        {
            v3[k]=v1[i];
            i=i+1;
        }
        else
        {
            v3[k]=v2[j];
            j=j+1;
        }
        k=k+1;
    }
    while(i<=N-1)
    {
        v3[k]=v1[i];
        i=i+1;
        k=k+1;
    }
    while(j<=M-1)
    {
        v3[k]=v2[j];
        j=j+1;
        k=k+1;
    }
    int controlli, indice, inizio, fine, medio, x;
    indice=-1;
    controlli=0;
    inizio=0;
    fine=N-1;
    cout<<"Che numero vuoi trovare?"<<endl;
    cin>>x;
    while(indice=-1 & inizio<=fine)
    {
        medio=inizio+(fine-inizio)/2;
        if(v3[medio]=x)
        {
            indice=medio;
        }
        else
        {
            if(v3[medio]>x)
            {
                fine=medio-1;
            }
            else
            {
                inizio=medio+1;
            }
        }
        controlli=controlli+1;
    }
    cout<<"Il valore è stato trovato nella cella "<<indice;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
