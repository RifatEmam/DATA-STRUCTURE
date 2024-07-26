#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top=-1;
void push(int x){
if(top<CAPACITY-1){
    top+=1;
    stack[top]=x;
    printf("Sucessfully added item %d\n",x);
}else {

printf("Exception no spaces \n");

return -1;
}


}
int pop() {
    if(top>=0){
        int val = stack[top];
        top-=1;
        return val;
    }else {
  return 1;

    }

}
int peek(){
if(top>=0){
    return stack[top];
}else {
return -1;
}

}

int main(){
printf("MY stack  starting \n");
printf("exception is peek \n",peek());
push(10);
push(50);
push(27);
printf("the pop item is %d\n",pop());
push(40);
printf("peek item is %d\n",peek());

return 0;
}
