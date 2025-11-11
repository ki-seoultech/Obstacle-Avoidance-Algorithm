
if (block_distance_w <= 5)  // 장애물을 만난다면
{
      controlKey = 's';
      delay(2000);
      Serial.print("RIGHT");
      controlKey = 'd';
      controlKey = 'w';  // 밑의 if문을 실행시키기 위한 이동
      if (abs(normal_distance) > 5)  // 현재 좌표와 목표 좌표의 축이 같다면 실행시키지 않음
      {
         while (block_distance_a <= 5)  // 왼쪽방향 장애물이 이어져있다면
         {
            if (abs(normal_distance) <= 5)
            {
               break;
            }
            controlKey = 'w';
            if (block_distance_a > 5)  // 왼쪽방향 장애물이 없다면
            {
              controlKey = 's';
              delay(2000);
       switch (controlKey) {
    case 'w':
      move_w();
      float measurement_distance = 측정거리값;  @ 스텝모터로 측정한 거리값을 저장
      break;
    case 'a':
      do_turn_angle(LEFT);
      break;
    case 'd':
      do_turn_angle(RIGHT);
      break;
    case 's':
      stepper1.stop();
      break;
  }


if (block_distance_w <= 5)  // 장애물을 만난다면
{
      controlKey = 's';
      delay(2000);
      Serial.print("RIGHT");
      controlKey = 'd';
      controlKey = 'w';  // 밑의 if문을 실행시키기 위한 이동
      if (abs(normal_distance) > 5)  // 현재 좌표와 목표 좌표의 축이 같다면 실행시키지 않음
      {
         while (block_distance_a <= 5)  // 왼쪽방향 장애물이 이어져있다면
         {
            if (abs(normal_distance) <= 5)
            {
               break;
            }
            if (xtotal_distance == 0)  @x축에 걸리면 오른쪽으로 돌기
            {
               Serial.print("RIGHT");
               controlKey = 'd';
               break;
            }
            if (ytotal_distance == 0)  @y축에 걸리면 왼쪽으로 돌기
            {
               Serial.print("LEFT");
               controlKey = 'a';
               break;
            }
            controlKey = 'w';
            if (block_distance_a > 5)  // 왼쪽방향 장애물이 없다면
            {
              controlKey = 's';
              delay(2000);
              Serial.print("LEFT");
              controlKey = 'a';
              while (block_distance_a > 5)
              {
                 controlKey = 'w';  // 코너에서 우수법이 작동되도록 장애물(벽)을 짚음
                 if (block_distance_a <= 5)  // 왼쪽방향 장애물이 있다면 원래코드로 복귀
                {
                    break;
                 }
              }
            }
         }
      }
}
//목적지까지 도달하는 알고리즘(장애물 없는 상태)
  else if (block_distance_w > 5 && heading_distance > 5)  //t방향 남은이동거리가 어떤 작은 수 5보다 크다면 @ 장애물이 없는 상태일 때 이동
  {
    controlKey = 'w';
  } 
@로봇 뒤에 목표가 있을떄 코드
else if (block_distance_w > 5 && heading_distance < -5)  @목표가 뒤에 있다면 180도 회전 @ 장애물이 없는 상태일 때
{
      Serial.print("ROTATION");
      controlKey = 'd';
      controlKey = 'd';
}
else if (block_distance_w > 5 && abs(heading_distance) <= 5)  //t방향 이동거리를 거의 다 맞췄다면 그 다음은 x를 맞춰야 한다.  @ 장애물이 없는 상태일 때
  {
    controlKey = 's';
    delay(2000);
    if (normal_distance < -5)  //왼쪽이 가까워지는 방향이면 좌회전
    {
      Serial.print("LEFT");
      controlKey = 'a';
      
    } else if (normal_distance > -5 && normal_distance < 5)  //n방향 거리도 맞았다면WWWWWW출력  @ 장애물이 없는 상태일 때
    {
      controlKey = 's';
      Serial.println("WWWWWWWWWWWWWWWWWWWWWWWWWWW");
    } else if (normal_distance > 5)  //오른쪽이 가까워지는 방향이면 우회전
    {
      Serial.print("RIGHT");
      controlKey = 'd';
      
    }
  }
}

float xtotal_distance = 0;  @플랫폼의 x좌표
float ytotal_distance = 0;  @플랫폼의 y좌표
//flatform이 바라보는 축의 목적지까지 남은거리
void f_heading_distance(int distance_x, int distance_y) {
  if (flatform_dir == 1)  //flatform이 왼쪽(-x)을 보고 있으면
  {
    heading_distance = distance_x;
    float xtotal_distance = xtotal_distance - measurement_distance;  @현재 x좌표 계산
   } else if (flatform_dir == 2)  //flatform이 위쪽(+y)을 보고 있으면
  {
    heading_distance = distance_y;
    float ytotal_distance = ytotal_distance + measurement_distance;  @현재 y좌표 계산
  } else if (flatform_dir == 3)  //flatform이 오른쪽(+x)을 보고 있으면
  {
    heading_distance = distance_x;
    float xtotal_distance = xtotal_distance + measurement_distance;  @현재 x좌표 계산
} else if (flatform_dir == 4)  //flatform이 아래쪽(-y)을 보고 있으면
  {
    heading_distance = distance_y;
    float ytotal_distance = ytotal_distance - measurement_distance;  @현재 y좌표 계산
  }
}         Serial.print("LEFT");
              controlKey = 'a';
              while (block_distance_a > 5)
              {
                 controlKey = 'w';  // 코너에서 우수법이 작동되도록 장애물(벽)을 짚음
                 if (block_distance_a <= 5)  // 왼쪽방향 장애물이 있다면 원래코드로 복귀
                {
                    break;
                 }
              }
            }
         }
      }
}
