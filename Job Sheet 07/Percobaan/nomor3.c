// NAMA : Rafli Arianto
// NIM  : 23343051

#include<stdio.h>
#define ukuran 6

int queue[ukuran]; 
int front = -1, rear = -1;

void enqueue(int element){
	if(front == -1 && rear == -1){ 
	front = 0;
	rear = 0;
	queue[rear] = element;
	}else if((rear + 1) % ukuran == front){
		printf("Antrian telah penuh..");
	}else{
		rear = (rear+1)%ukuran; 
		queue[rear] = element; 
	}
}

void dequeue(){
	if((front == -1) && (rear == -1)){ 
		printf("\nQueue kosong...");
	}else if(front == rear){
		printf("\nElemen yang di-dequeue adalah %d ", queue[front]);
		front = -1;
		rear = -1;
	}else{
		printf("\nElemen yang di-dequeue adalah %d", queue[front]);
		front = (front+1)%ukuran;
	}
}

void display(){
	int i=front;
	if(front==-1 && rear==-1){
		printf("\nQueue kosong!!..");
	}
	else{
		printf("\nElemen pada queue adalah : ");
		while(i<=rear){
			printf("%d,",queue[i]);
			i=(i+1)%ukuran;
		}
	}
} 

int main(){
	int menu=1, x; 
	
	while(menu<4 && menu!=0){ 
		printf("\n**********Circular Queue**********\n");
		printf("==================================\n");
		printf("1: Tambah sebuah elemen\n2: Hapus sebuah elemen\n3: Tampilkan semua elemen\n4: Keluar");
		printf("\nMasukan pilihanmu : ");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				printf("Silahkan masukan elemen yang ingin kamu tambah : ");
				scanf("%d", &x);
				enqueue(x);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
		}
		
	}
	return 0;
}
