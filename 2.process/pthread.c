#include <myfunc.h>
int main(int argc,char*argv[]) {
	pthread_t tid1;
	pthread_create(tid,NULL,routine,NULL);
	return 0;
}
