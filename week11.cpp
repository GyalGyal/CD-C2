
// Windows API ����� ���� �������
#include <windows.h>
// �ܼ� ����� �Լ�(_kbhit, _getch) ����� ���� �������
#include <conio.h>
// ǥ�� ����� �Լ�(printf) ����� ���� �������
#include <stdio.h>
#include <time.h>


// ���� ȭ�� ���� ũ�� (40)
#define WIDTH 40
// ���� ȭ�� ���� ũ�� (20)
#define HEIGHT 20
// ���ÿ� ������ �� �ִ� �ִ� �Ѿ� ���� (5)
#define BULLET_MAX 5
#define ENEMY_MAX 3

// �Ѿ� ������ �����ϴ� ����ü ����
typedef struct{
    int x, y; // x��ǥ, y��ǥ
    int active; // �Ѿ��� Ȱ��ȭ�Ǿ� �ִ��� ���� (0=��Ȱ��, 1=Ȱ��)
} Bullet;

typedef struct{
    int x, y;
    int active;
}Enemy;




// �Ѿ˵��� ������ �迭 ����
Bullet bullet[BULLET_MAX];
Enemy enemy[ENEMY_MAX];
// �ܼ� Ŀ���� Ư�� ��ġ(x,y)�� �̵���Ű�� �Լ�
void gotoxy(int x, int y) {
    // ��ǥ�� �����ϴ� ����ü (x, y ������ �ʱ�ȭ)
    COORD pos = { x, y };
    // ǥ�� ��� �ڵ��� �� Ŀ�� ��ġ ����
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// �ܼ� Ŀ���� ����� �Լ�
void hideCursor() {
    // Ŀ�� ���� ����ü (ũ��=1, ���̱�=FALSE)
    CONSOLE_CURSOR_INFO info = { 1, false };
    // ǥ�� ��� �ڵ��� �� Ŀ�� ���� ����
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

int main() {

    int score = 0;
 	int lives = 3;
 
 	time_t t = 0;
 	time_t timer1 = 0;
 	time_t timer2 = 0;
 	
 	gotoxy(0, HEIGHT+2);
 	printf("������");


    srand(time(NULL));
    // �÷��̾� ���� ��ġ (ȭ�� �߾� �ϴ�)
    int playerX = WIDTH/ 2;
    
     
    // ���� ƽ ī���� �ʱⰪ
    int tick = 0;
    int count = 0;
    bool game_over = false;
    // Ŀ�� ����� �Լ� ȣ��
    hideCursor();

    // ���� �ݺ� (���� ���� ����)
    while (lives > 0) {
        // Ű �Է� ó��
        // Ű�� ���ȴ��� Ȯ���ϴ� �Լ�
        if (_kbhit()) {
            // ���� Ű�� �о���� �Լ�
            char key = _getch();
            // ���� ȭ��ǥ Ű�ڵ�(75)�̰� ���� ���� ���� �ʾ����� �������� �̵�
            if (key == 'a' && playerX > 0) playerX --;        // ����
            // ������ ȭ��ǥ Ű�ڵ�(77)�̰� ������ ���� ���� �ʾ����� ���������� �̵�
            else if (key == 'd' && playerX < WIDTH-1) playerX++; // ������
            // �����̽��ٰ� �������� �Ѿ� �߻�
            else if (key == ' ') {
                // �Ѿ� �߻� - ��Ȱ�� �Ѿ� ���� ã��
                for (int i = 0; i < BULLET_MAX; i++) {
                    // ���� �Ѿ��� ��Ȱ�� ���¶��
                    if (!bullet[i].active) {
                        // �Ѿ� x��ġ�� �÷��̾� ��ġ�� ����
                        bullet[i].x = playerX;
                        // �Ѿ� y��ġ�� �÷��̾� �ٷ� ���� ���� (HEIGHT-2)
                        bullet[i].y = HEIGHT - 2;
                        // �Ѿ��� Ȱ�� ���·� ����
                        bullet[i].active = 1;
                        // �� ���� �ϳ��� �Ѿ˸� �߻��ϹǷ� �ݺ��� Ż��
                        break;
                    }
                }
            }
        }

        // �Ѿ� �̵� ó��
        for (int i = 0; i < BULLET_MAX; i++) {
            // ���� �Ѿ��� Ȱ�� ���¶��
            if (bullet[i].active) {
                // �Ѿ��� ���� ��ġ�� �������� �����
                gotoxy(bullet[i].x, bullet[i].y);
                printf(" "); // ���� ����
                // �Ѿ��� ���� �� ĭ �̵� (y��ǥ ����)
                bullet[i].y--;
                // �Ѿ��� ȭ�� ������ ������� ��Ȱ��ȭ
                if (bullet[i].y <= 0) bullet[i].active = 0;
                else {
                    // �Ѿ��� �� ��ġ�� �Ѿ� ��� �׸���
                    gotoxy(bullet[i].x, bullet[i].y);
                    printf("+"); // �Ѿ� ��� (|)
                }
            }
        }
        if (tick % 10 == 0) {
            for (int i = 0; i < ENEMY_MAX; i++) {

                if (!enemy[i].active)
                {
                    enemy[i].active = 1;
                    enemy[i].x = rand() % WIDTH;
                    enemy[i].y = 0;
                    break;
                }
            }
        }
        for (int i = 0; i < ENEMY_MAX; i++) {
            if (enemy[i].active) {
                gotoxy(enemy[i].x,enemy[i].y);
                printf(" ");
                enemy[i].y++;
                if (enemy[i].y > HEIGHT - 1) {
                    enemy[i].active = 0;
                    if (playerX == enemy[i].x) {
                    	
                    	lives--;
                    	
                    
						
                    	gotoxy(100,10);
                    	printf("DANGER");
                    	 timer1 = time(NULL);
                    	// ���� �ð� ��������  
            		    
                       
                    }
                    
                    
                    if(lives == 2)
					{
						gotoxy(0,HEIGHT+2);
						printf("������");
					
					 } ;
					 
					 if(lives == 1)
					 {
					 	gotoxy(0,HEIGHT+2);
					 	printf("������");
					 
					  } 
                    
                    if(lives == 0){
		
				
                     // ȭ�� �Ʒ������� Ŀ�� �̵�
                        gotoxy(0, HEIGHT+1);
                        // ���ӿ��� �޽��� ��� ("���� ����!")
                        printf("\nGAME OVER!\n");
                        gotoxy(0, HEIGHT+1);
						printf("������");
                        // ���� ���� Ż��
                        game_over = true;
                    }
                    
					         
                }
                else {
                    gotoxy(enemy[i].x, enemy[i].y);
                    printf("*");
                }
            }
           
        }
        if (game_over) break;
        // �� �̵� ó��
        // ���� ���� ��ġ�� �������� �����
        //gotoxy(enemyX, enemyY);
        //printf("   "); // ���� ����
        //// ���� �Ʒ��� �� ĭ �̵� (y��ǥ ����)
        // 
        //enemyY++;
        //// ���� ȭ�� �Ʒ��ʿ� ����������
        //if (enemyY >= HEIGHT - 1) {
        //    // �÷��̾�� ���� x��ǥ�� ������ �浹 (���ӿ���)
        //    if (playerX == enemyX) {
        //        // ȭ�� �Ʒ������� Ŀ�� �̵�
        //        gotoxy(0, HEIGHT);
        //        // ���ӿ��� �޽��� ��� ("���� ����!")
        //        printf("\nGAME OVER!\n");
        //        // ���� ���� Ż��
        //        break; 
        //    }
        //    // ���� ȭ�� �� ���� ���ġ
        //    enemyY = 0;
        //    // ���� x��ġ�� ���ο� ���� ��ġ�� ����
        //    enemyX = rand() % WIDTH;
        //}
        //// ���� �� ��ġ�� �� ��� �׸���
        //gotoxy(enemyX, enemyY);
        //printf("*"); // �� ��� (X)

        // �Ѿ˰� �� �浹 ����
        for (int i = 0; i < BULLET_MAX; i++) {
            for (int j = 0; j < ENEMY_MAX; j++) {
                if (bullet[i].active && bullet[i].x == enemy[j].x && bullet[i].y == enemy[j].y) {
                    score += 1;
                    // �浹�� �Ѿ��� ��Ȱ��ȭ
                    bullet[i].active = 0;
                    // ���� �ִ� ��ġ�� �������� �����
                    gotoxy(enemy[j].x, enemy[j].y);
                    printf(" "); // ���� ����
                    // ���� ȭ�� �� ���� ���ġ
                    enemy[j].active = 0;
                }
            }
            // �Ѿ��� Ȱ���̰�, �Ѿ˰� ���� x,y��ǥ�� ��� ������ �浹
            
        }

        // �÷��̾� ǥ��
        // �÷��̾� ��ġ�� Ŀ�� �̵� (ȭ�� �� �Ʒ�)
        gotoxy(playerX, HEIGHT - 1);
        // �÷��̾� ��� ���
        printf("\\"); // �÷��̾� ��� (^)

        // ���� �ӵ� ���� (50�и��� ���)
        Sleep(50);

        // �÷��̾� ���� ��ġ ����� (������ ����)
        gotoxy(playerX, HEIGHT - 1);
        printf(" "); // ���� ����

        gotoxy(0, HEIGHT);
        printf("SCORE : %d", score);

        tick++;
        
        time_t timer2 = time(NULL);
        
        t = timer2 - timer1;
        if( t > 2)
        {
        	gotoxy(100, 10);
        	printf("      ");
		}
        // ���� �ð� �������� 2
		// �ð� 2 - �ð� 1 = �ð� ��
		// ���� �ð� ���� 2�� �̻��̶�� -> Danger �޽����� ���
        
    }

    // ���α׷� ���� ����
    return 0;
}

