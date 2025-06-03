
// Windows API 사용을 위한 헤더파일
#include <windows.h>
// 콘솔 입출력 함수(_kbhit, _getch) 사용을 위한 헤더파일
#include <conio.h>
// 표준 입출력 함수(printf) 사용을 위한 헤더파일
#include <stdio.h>
#include <time.h>


// 게임 화면 가로 크기 (40)
#define WIDTH 40
// 게임 화면 세로 크기 (20)
#define HEIGHT 20
// 동시에 존재할 수 있는 최대 총알 개수 (5)
#define BULLET_MAX 5
#define ENEMY_MAX 3

// 총알 정보를 저장하는 구조체 정의
typedef struct{
    int x, y; // x좌표, y좌표
    int active; // 총알이 활성화되어 있는지 여부 (0=비활성, 1=활성)
} Bullet;

typedef struct{
    int x, y;
    int active;
}Enemy;




// 총알들을 저장할 배열 선언
Bullet bullet[BULLET_MAX];
Enemy enemy[ENEMY_MAX];
// 콘솔 커서를 특정 위치(x,y)로 이동시키는 함수
void gotoxy(int x, int y) {
    // 좌표를 저장하는 구조체 (x, y 순서로 초기화)
    COORD pos = { x, y };
    // 표준 출력 핸들을 얻어서 커서 위치 설정
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// 콘솔 커서를 숨기는 함수
void hideCursor() {
    // 커서 정보 구조체 (크기=1, 보이기=FALSE)
    CONSOLE_CURSOR_INFO info = { 1, false };
    // 표준 출력 핸들을 얻어서 커서 정보 설정
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

int main() {

    int score = 0;
 	int lives = 3;
 
 	time_t t = 0;
 	time_t timer1 = 0;
 	time_t timer2 = 0;
 	
 	gotoxy(0, HEIGHT+2);
 	printf("♥♥♥");


    srand(time(NULL));
    // 플레이어 시작 위치 (화면 중앙 하단)
    int playerX = WIDTH/ 2;
    
     
    // 게임 틱 카운터 초기값
    int tick = 0;
    int count = 0;
    bool game_over = false;
    // 커서 숨기기 함수 호출
    hideCursor();

    // 무한 반복 (게임 메인 루프)
    while (lives > 0) {
        // 키 입력 처리
        // 키가 눌렸는지 확인하는 함수
        if (_kbhit()) {
            // 눌린 키를 읽어오는 함수
            char key = _getch();
            // 왼쪽 화살표 키코드(75)이고 왼쪽 벽에 닿지 않았으면 왼쪽으로 이동
            if (key == 'a' && playerX > 0) playerX --;        // 왼쪽
            // 오른쪽 화살표 키코드(77)이고 오른쪽 벽에 닿지 않았으면 오른쪽으로 이동
            else if (key == 'd' && playerX < WIDTH-1) playerX++; // 오른쪽
            // 스페이스바가 눌렸으면 총알 발사
            else if (key == ' ') {
                // 총알 발사 - 비활성 총알 슬롯 찾기
                for (int i = 0; i < BULLET_MAX; i++) {
                    // 현재 총알이 비활성 상태라면
                    if (!bullet[i].active) {
                        // 총알 x위치를 플레이어 위치로 설정
                        bullet[i].x = playerX;
                        // 총알 y위치를 플레이어 바로 위로 설정 (HEIGHT-2)
                        bullet[i].y = HEIGHT - 2;
                        // 총알을 활성 상태로 변경
                        bullet[i].active = 1;
                        // 한 번에 하나의 총알만 발사하므로 반복문 탈출
                        break;
                    }
                }
            }
        }

        // 총알 이동 처리
        for (int i = 0; i < BULLET_MAX; i++) {
            // 현재 총알이 활성 상태라면
            if (bullet[i].active) {
                // 총알의 이전 위치를 공백으로 지우기
                gotoxy(bullet[i].x, bullet[i].y);
                printf(" "); // 공백 문자
                // 총알을 위로 한 칸 이동 (y좌표 감소)
                bullet[i].y--;
                // 총알이 화면 위쪽을 벗어났으면 비활성화
                if (bullet[i].y <= 0) bullet[i].active = 0;
                else {
                    // 총알의 새 위치에 총알 모양 그리기
                    gotoxy(bullet[i].x, bullet[i].y);
                    printf("+"); // 총알 모양 (|)
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
                    	// 현재 시간 가져오기  
            		    
                       
                    }
                    
                    
                    if(lives == 2)
					{
						gotoxy(0,HEIGHT+2);
						printf("♥♥♡");
					
					 } ;
					 
					 if(lives == 1)
					 {
					 	gotoxy(0,HEIGHT+2);
					 	printf("♥♡♡");
					 
					  } 
                    
                    if(lives == 0){
		
				
                     // 화면 아래쪽으로 커서 이동
                        gotoxy(0, HEIGHT+1);
                        // 게임오버 메시지 출력 ("게임 오버!")
                        printf("\nGAME OVER!\n");
                        gotoxy(0, HEIGHT+1);
						printf("♡♡♡");
                        // 게임 루프 탈출
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
        // 적 이동 처리
        // 적의 이전 위치를 공백으로 지우기
        //gotoxy(enemyX, enemyY);
        //printf("   "); // 공백 문자
        //// 적을 아래로 한 칸 이동 (y좌표 증가)
        // 
        //enemyY++;
        //// 적이 화면 아래쪽에 도달했으면
        //if (enemyY >= HEIGHT - 1) {
        //    // 플레이어와 적의 x좌표가 같으면 충돌 (게임오버)
        //    if (playerX == enemyX) {
        //        // 화면 아래쪽으로 커서 이동
        //        gotoxy(0, HEIGHT);
        //        // 게임오버 메시지 출력 ("게임 오버!")
        //        printf("\nGAME OVER!\n");
        //        // 게임 루프 탈출
        //        break; 
        //    }
        //    // 적을 화면 맨 위로 재배치
        //    enemyY = 0;
        //    // 적의 x위치를 새로운 랜덤 위치로 설정
        //    enemyX = rand() % WIDTH;
        //}
        //// 적의 새 위치에 적 모양 그리기
        //gotoxy(enemyX, enemyY);
        //printf("*"); // 적 모양 (X)

        // 총알과 적 충돌 판정
        for (int i = 0; i < BULLET_MAX; i++) {
            for (int j = 0; j < ENEMY_MAX; j++) {
                if (bullet[i].active && bullet[i].x == enemy[j].x && bullet[i].y == enemy[j].y) {
                    score += 1;
                    // 충돌한 총알을 비활성화
                    bullet[i].active = 0;
                    // 적이 있던 위치를 공백으로 지우기
                    gotoxy(enemy[j].x, enemy[j].y);
                    printf(" "); // 공백 문자
                    // 적을 화면 맨 위로 재배치
                    enemy[j].active = 0;
                }
            }
            // 총알이 활성이고, 총알과 적의 x,y좌표가 모두 같으면 충돌
            
        }

        // 플레이어 표시
        // 플레이어 위치로 커서 이동 (화면 맨 아래)
        gotoxy(playerX, HEIGHT - 1);
        // 플레이어 모양 출력
        printf("\\"); // 플레이어 모양 (^)

        // 게임 속도 조절 (50밀리초 대기)
        Sleep(50);

        // 플레이어 이전 위치 지우기 (깜빡임 방지)
        gotoxy(playerX, HEIGHT - 1);
        printf(" "); // 공백 문자

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
        // 현재 시간 가져오기 2
		// 시간 2 - 시간 1 = 시간 차
		// 만약 시간 차가 2초 이상이라면 -> Danger 메시지를 덮어쓰
        
    }

    // 프로그램 정상 종료
    return 0;
}

