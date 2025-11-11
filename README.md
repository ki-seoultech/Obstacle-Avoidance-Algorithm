# 🤖 Obstacle Avoidance & Path Tracking Algorithm

**Author:** Ki Hyunbin (Seoul National University of Science & Technology)  
**Language:** Arduino (C/C++)  
**Project Type:** 2nd-year Term Project  

---

## 📘 Overview
This project implements a **self-driving obstacle avoidance algorithm** using distance sensors.  
The robot detects obstacles in front and on its sides, autonomously avoids them using the **right-hand rule**,  
and navigates toward a given target coordinate.

---

## 🧠 Algorithm Logic

1. **Obstacle Detection:**  
   - Uses `block_distance_w` (front) and `block_distance_a` (left) sensors  
   - Stops and turns right when obstacle detected  

2. **Wall Following (Right-Hand Rule):**  
   - When left side is blocked, continue forward while tracing the wall  
   - If left wall disappears, turn left and continue  

3. **Coordinate Correction:**  
   - Real-time update of position `(x, y)` based on movement and facing direction  
   - Adjusts heading to align with target position  

4. **Goal Reached Condition:**  
   - When both heading and normal distances ≤ 5, stops and prints `"WWWWWWWW..."`  

---

## ⚙️ Technical Details
- **Sensors:** Ultrasonic (front/side)
- **Control Commands:**  
  `w` = forward, `a` = turn left, `d` = turn right, `s` = stop  
- **Core Functions:**  
  `move_w()`, `do_turn_angle()`, `f_heading_distance()`
- **Key Feature:** FSM-based (Finite State Machine) control structure

---

## 🧩 Key Insights
> "Simple distance-sensor feedback can enable a robot to understand its surroundings  
> and autonomously reach a target point through dynamic obstacle avoidance."

This project laid the foundation for my later studies in **ROS2 navigation and Physical AI robotics.**

---

## 🚀 Future Improvements
- Integrate Lidar for finer distance mapping  
- Add PID control for smoother rotation  
- Visualize trajectory on 2D coordinate grid

---

## 📎 Repository Information
This code was implemented and tested on Arduino-based stepper-motor platform  
for a 2nd-year mechanical system design course project.
