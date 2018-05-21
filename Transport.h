
class transport
{
    public:
        void create_Post(int m,double *A);
        void create_Potr(int n,double *B);
        void create_trtabl(int n,int m,double **C)

    private:
        double *A;
        double *B;
        double **C;
        int d=1;
        int n,m;
        int i,j;
        //double *b;
        double *buf;
};


