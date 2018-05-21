#ifndef transport_h
#define transport_h
class transport
{
    public:
        void create_Post(int m,double *A);
        void create_Potr(int n,double *B);
        void create_trtabl(int n,int m,double **C);

    private:
        double *A;
        double *B;
        double **C;
        int n,m;
        int i,j;
        //double *b;
        double *buf;
};

#endif
