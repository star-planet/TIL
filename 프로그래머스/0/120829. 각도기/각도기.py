def solution(angle):
    return (angle % 90 > 0) + (angle // 90) * 2 